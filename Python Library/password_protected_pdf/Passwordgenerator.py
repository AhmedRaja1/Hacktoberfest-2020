#this generates a random password
"""
Generates a random password, input the password length you want, I've limited it to 90,000 chars, but anyways at 100,000 chars it stops working and even at 90,000 chars it's not very acurate. 
welp 155 views thank you, this is now the 2nd most viewed code on my profile
"""
"""
Please star I've been working on this code since yesterday, this took way tooo long. Also I'm working towards an achievment, I'm pretty sure its called senior developer, for that i need  on a single bit of code
"""
import random

a1 = ["q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm']
a2 = ['Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M']
b1 = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0']
c1 = ['!', "@", '#', '$', '%', '^', '&', '*', '(', ')']
e = ""

n = int(input("Length of your password: "))
print(n)
d = []

if n <= 90000:
    while len(d) <= n - 1:
        d.append(random.choice(a1 + b1 + a2 + c1))
print("here is your password, it is completely random:", e.join(d))

if n > 90000:
    print("Why do you need so many characters. ")
    

