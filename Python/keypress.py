import turtle


import turtle
turtle.setup(400,500)
wn=turtle.screen()
wn.title("Handling keypress! in Python!")
wn.bgcolor("blue")
t=turtle.Turtle()
t.color("black")
t.shape("turtle")
def move():
    t.forward(2)
def turn_left():
    t.left(90)
def exit():
    wn.bye()