import itertools
import string



def guess_password(real):
    password = string.ascii_lowercase+string.digits
    attempts=0
    
    for password_length in range(0,9):
        for guess in itertools.product(password,repeat=password_length):
            attempts +=1
            
            guess="".join(guess)
            
            if guess == real :
                return (guess,attempts)
            print (guess,attempts)
            
#print (guess_password("hamas"))
PASSWRD=input("PASSWORD: ")
print(guess_password(PASSWRD))