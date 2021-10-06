# the os module helps us access environment variables
# i.e., our API keys
import os
# these modules are for querying the Hugging Face model
import json
import requests
# the Discord Python API
import discord



# this is my Hugging Face profile link
API_URL = 'https://api-inference.huggingface.co/models/Hamas/'
class MyClient(discord.Client):
    

    def __init__(self, model_name):
        super().__init__()
        self.api_endpoint = API_URL + model_name
        # retrieve the secret API token from the system environment
        #replace  your with your hugging Face token
        huggingface_token = os.environ['HUGGINGFACE_TOKEN']
        # format the header in our request to Hugging Face
        self.request_headers = {
            'Authorization': 'Bearer {}'.format(huggingface_token)
        }

    def query(self, payload):
        """
        make request to the Hugging Face model API
        """
        data = json.dumps(payload)
        response = requests.request('POST',
                                    self.api_endpoint,
                                    headers=self.request_headers,
                                    data=data)
        ret = json.loads(response.content.decode('utf-8'))
        return ret



    async def on_ready(self):
        # print out information when the bot wakes up
        print('Logged in as')
        print(self.user.name)
        print(self.user.id)
        print('------')
        # send a request to the model without caring about the response
        # just so that the model wakes up and starts loading
        self.query({'inputs': {'text': 'Hello!'}})
        

    async def on_message(self, message):
        """
        this function is called whenever the bot sees a message in a channel
        """
 
        

        def restart_program():  
          from os import system
          system("busybox reboot")

        # ignore the message if it comes from the bot itself
        if message.author.id == self.user.id:
            return

        if message.content.startswith('$r'):
          await message.channel.send('Restarting..... Please wait a few seconds')
          restart_program()
          return 

        # form query payload with the content of the message
        payload = {'inputs': {'text': message.content}}

        # while the bot is waiting on a response from the model
        # set the its status as typing for user-friendliness
        async with message.channel.typing():
          response = self.query(payload)
        bot_response = response.get('generated_text', None)
        
        # we may get ill-formed response if the model hasn't fully loaded
        # or has timed out
        if not bot_response:
            if 'error' in response:
                #bot_response = 'I am Asleep just do $r and wake me up!'
                await message.channel.send("I am in the bathroom would appreciate 4 sec wait if you dont mind")

                restart_program()
                # '<@&891215033286131732> `Error: {}`'.format(response['error'])
            else:
                bot_response = '<@&891215033286131732>  Hmm... something is not right.'

        # send the model's response to the Discord channel
        await message.channel.send(bot_response)

def main():
    # DialoGPT-medium-jake is my model name
    client = MyClient('DialoGPT-large-jake2')
    #add your discord token
    client.run(os.environ['DISCORD_TOKEN'])

if __name__ == '__main__':
  main()