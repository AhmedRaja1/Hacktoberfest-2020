from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer
from tkinter import *
import pyttsx3 as pp
import speech_recognition as s
import threading
import wikipedia

engine = pp.init()

voices = engine.getProperty('voices')
print(voices)

engine.setProperty('voice', voices[1].id)

def speak(word):
    engine.say(word)
    engine.runAndWait()

bot = ChatBot(
    "My Bot",
    logic_adapters=[
        {
            'import_path': 'chatterbot.logic.BestMatch',
            # 'default_response': 'I am sorry, but I do not understand.',
            # 'default_response': 'answer_from_bot = wikipedia.summary(query,sentences=4),
            'default_response': '0',
            'maximum_similarity_threshold': 0.90
        }
    ]
)

convo = [
    'hello',
    'hi there !',
    'hi',
    'what is your name?',
    'My name is Bot, i am created by ali',
    'how are you?',
    'I am doing great these days',
    'thank you',
    'Welcome',
    'In which city you live ?',
    'I live in peshawar',
    'In which language you talk?',
    'I mostly talk in English.',

]

trainer = ListTrainer(bot)

# now training the bot with the help of trainer

trainer.train(convo)

# answer = bot.get_response('What is your name?')
# print(answer)

# print("Talk to bot")
# while True:
#     query = input()
#     if query == 'exit':
#         break
#     answer = bot.get_response(query)
#     print("bot : ",answer)

main = Tk()

main.geometry("500x650")

main.title("My Chat bot")

img = PhotoImage(file="bot.png")

photoL = Label(main, image=img)

photoL.pack(pady=5)

def takeQuery():
    sr = s.Recognizer()
    sr.pause_threshold = 1
    print("your bot is listening try to speak")
    with s.Microphone() as m:
        try:
            audio = sr.listen(m)
            query = sr.recognize_google(audio, language='eng-in')
            print(query)
            textF.delete(0, END)
            textF.insert(0, query)
            ask_from_bot()
        except Exception as e:
            print(e)
            print("Not recognized")

def ask_from_bot():
    query = textF.get()
    # try:
    answer_from_bot = bot.get_response(query)
    if(str(answer_from_bot) != '0'):
    # except:
    #     answer_from_bot = wikipedia.summary(query,sentences=4)
        msgs.insert(END, "you : " + query)
        msgs.insert(END, "bot : " + str(answer_from_bot))
        speak(answer_from_bot)
        textF.delete(0, END)
        msgs.yview(END)
    else:
        answer_from_bot = wikipedia.summary(query, sentences=4)
        msgs.insert(END, "you : " + query)
        msgs.insert(END, "bot : " + str(answer_from_bot))
        speak(answer_from_bot)
        textF.delete(0, END)
        msgs.yview(END)


frame = Frame(main)

sc = Scrollbar(frame)
cs = Scrollbar(frame, orient='horizontal')
msgs = Listbox(frame, width=80, height=20, yscrollcommand=sc.set)

sc.pack(side=RIGHT, fill=Y)
cs.pack(side=BOTTOM, fill=X)
msgs.pack(side=LEFT, fill=BOTH, pady=10)

frame.pack()

# creating text field

textF = Entry(main, font=("Verdana", 20))
textF.pack(fill=X, pady=10)

btn = Button(main, text="Ask from bot", font=("Verdana", 20), command=ask_from_bot)
btn.pack()

def enter_function(event):
    btn.invoke()

main.bind('<Return>', enter_function)

def repeatL():
    while True:
        takeQuery()

t = threading.Thread(target=repeatL)

t.start()

main.mainloop()