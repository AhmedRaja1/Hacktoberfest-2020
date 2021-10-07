from twilio.rest import Client
import time

temp = "no"
last_line = "no"

while True:
    with open("msg.txt","r") as file:
        first_line = file.readline()
        for last_line in file:
            pass
    temp = last_line
    
    from twilio.rest import Client 
 
    account_sid = 'YOUR AUTH KEY' 
    auth_token = 'YOUR AUTH TOKEN' 
    client = Client(account_sid, auth_token) 
 
    message = client.messages.create( 
                              from_='whatsapp:+14155238886',  
                              body=temp,      
                              to='whatsapp:+YOUR WHATSAPP NUMBER' 
                          ) 
 
    print("message sent")
    time.sleep(1)
    