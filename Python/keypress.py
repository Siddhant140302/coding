import turtle
from turtle import Screen
turtle.setup(400,500)
window=turtle.Screen()
window.title("Handling keypress! in Python!")
window.bgcolor("blue")
t=turtle.Turtle()
t.color("black")
t.shape("turtle")
def move():
    t.forward(100)
def turn_left():
    t.left(90)
def exit():
    window.bye()
window.onkey(move, 'space')
window.onkey(exit, 'q')

window.listen()
window.mainloop()