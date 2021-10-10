alphabets = "abcdefghijklmnopqrstuvwxyz"
passw =""
passwrd = input("Enter Password: ")
length_of_passwrd = len(passwrd)


for i in range(length_of_passwrd):
    character = passwrd[i]
    location = alphabets.find(character)
    if character == "a" :
        passw = str(passw.join)
        print(passw)
        exit()
    