import random
num = random.randint(1,100)                      # To select any random integer between 1 & 100

print("WELCOME TO GUESS ME!")
print("Let me select a number between 1 and 100")
print("If your guess is more than 10 away from my number, I'll tell you you're COLD")
print("If your guess is within 10 of my number, I'll tell you you're WARM")
print("If your guess is farther than your most recent guess, I'll say you're getting COLDER")
print("If your guess is closer than your most recent guess, I'll say you're getting WARMER")
print("LET'S PLAY!")
guesses=[0]
while(True):
    guess = int(input('Make your guess\n'))
    if guess<1 or guess>100:                                             # to ensure guess lies within the range
        print("OUT OF BOUNDS!")
        continue

    if guess==num:
        print('welldone!, you guessed the correct answer in {} attempts.\n'.format(len(guesses)))
        break
    guesses.append(guess)                                            # all the incorrect guesses are added to  list
    if len(guesses)>10:                                              # after nine trials player may choose to know the answer
        temp = int(input('ready to know the answer?\nPress 1 for Yes and 0 to continue\n'))
        if temp == 1:
            print(num)
            print('Try next time, Cheers!')
            break
    if guesses[-2]==0:                                                 # when testing the first guess, guesses[-2]==0, which evaluates to False
                                                                        # and brings us down to the second section
        if abs(num-guess) < abs(num-guesses[-2]):
            print('WARMER!')
        else:
            print('COLDER!')
    else:
        if abs(num-guess) <= 10:
            print('WARM!')
        else:
            print('COOL!')
