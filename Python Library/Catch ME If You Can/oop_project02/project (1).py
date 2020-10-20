#CatCH ME IF YOU CAN

#GETTING STARTED

import turtle
import random
import os


score = 0
lives = 3

Player_image = "Wizard-Clap-by-Markus-Magnusson.gif"
good_guyss = "good_guy.gif"
bad_guyss = "bad_guy.gif"

wn= turtle.Screen()
wn.title("Catch me if you can")
wn.register_shape(Player_image)
wn.register_shape(good_guyss)
wn.register_shape(bad_guyss)
wn.bgpic("background.gif")
wn.setup(width=800, height=600)
wn.tracer(0) #shuts up all screen updates,program wont hang


#ADDING PLAYER
player= turtle.Turtle() # Creating player and setting some attributes #every time its goes it creates a newgood guy like good guy ine good guy 2 ..so on
player.shape(Player_image)
player.speed(0)
player.penup()
player.goto(0 ,-250)

player.direction ="stop" #games starts player stops until the user decides left or right


#Creating a list of food
good_guys = []

#ADDING FOOD
for _ in range(15):
    good_guy= turtle.Turtle() # Creating player and setting some attributes
    good_guy.speed(0)#speed is a funtion
    good_guy.shape(good_guyss)
    good_guy.penup()
    good_guy.goto(-100, 250)
    good_guy.speed = random.randint(1, 2) #speed is variable
    good_guys.append(good_guy) #append(object) meaning add

#Creating a list of avoids
bad_guys = []

#ADDING FOOD TO AVOID
for _ in range(5):
    bad_guy= turtle.Turtle() # Creating player and setting some attributes
    bad_guy.speed(0)#speed is a funtion
    bad_guy.shape(bad_guyss)
    bad_guy.penup()
    bad_guy.goto(100, 250)
    bad_guy.speed = random.randint(1, 2) #speed is variable
    bad_guys.append(bad_guy) #append(object) meaning add

#making the pen
pen= turtle.Turtle() # Creating player and setting some attributes #every time its goes it creates a newgood guy like good guy ine good guy 2 ..so on
pen.hideturtle()
pen.speed(0)
pen.shape("square")
pen.color("red")
pen.penup()
pen.goto(0 , 260)
Font = ("Courier", 24, "normal")
pen.write("SCORE: {} LIVES: {}".format(score, lives), align="center", font = Font)

#FUNCTION
def go_right():
    player.direction = "right"

def go_left():
    player.direction = "left"


#KEYBOARD BINDING
wn.listen() #saying to windowtht listen to keyboard input
wn.onkeypress(go_left, "Left") #Left=left arrow on keyboard
wn.onkeypress(go_right, "Right")

 #main game loop
while True: #while somethig istrueit will repeat
    #update screen
    wn.update()

      #move the player #indented part from line 26-29 cz of part of if statment
    if player.direction == "left":
        x = player.xcor() #returns turtle xcoordinate
        x -= 3
        player.setx(x) #setting x to -3


    if player.direction == "right":
        x = player.xcor() #returns turtle xcoordinate
        x += 3
        player.setx(x) #setting x to -3

    if player.xcor() == 369:
        x -= 3
        player.setx(x) #setting x to -3

    if player.xcor() == -375:
        x += 3
        player.setx(x) #setting x to -3

    #move the good guys
    for good_guy in good_guys:
        y = good_guy.ycor()
        y -= good_guy.speed
        good_guy.sety(y)

        #Check if off the screen
        if y < -300:
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            good_guy.goto(x, y)

        #check for the collosion with player
        if good_guy.distance(player) < 20:
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            good_guy.goto(x,y)
            score += 10
            pen.clear()
            if lives > 0 :
                pen.write("SCORE: {} LIVES: {}".format(score, lives), align="center", font = Font)


    #move the bad guys
    for bad_guy in bad_guys:
        y = bad_guy.ycor()
        y -= bad_guy.speed
        bad_guy.sety(y)

        #Check if off the screen
        if y < -300:
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            bad_guy.goto(x, y)

        #check for the collosion with player
        if bad_guy.distance(player) < 20:
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            bad_guy.goto(x,y)
            score -= 10
            lives -=1
            pen.clear()
            if lives > 0:
                pen.write("SCORE: {} LIVES: {}".format(score, lives), align="center", font=Font)

    if lives == 0:
        pen.write("GAME OVER !! Your Score was : {}".format(score),True,align="center",font=Font)
        break

wn.mainloop()
