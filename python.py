import turtle
turtle.title("Happy Birthday Dear")
turtle.pensize(6)
bg=turtle.Screen()
bg.bgcolor("orange")
#bottom line 1
turtle.penup()
turtle.goto(-170,-180)
turtle.color("white")
turtle.pendown()
turtle.forward(350)

#Mid line
turtle.penup()
turtle.goto(-160,-150)
turtle.color("white")
turtle.pendown()
turtle.forward(300)

#first line
turtle.penup()
turtle.goto(-150,-120)
turtle.color("white")
turtle.pendown()
turtle.forward(250)
bg.bgcolor("lightgreen")

#cake
turtle.penup()
turtle.goto(-100,-100)
turtle.color("white")
turtle.begin_fill()
turtle.pendown()
turtle.forward(140)
turtle.left(90)
turtle.forward(95)
turtle.left(90)
turtle.forward(140)
turtle.left(90)
turtle.forward(95)
turtle.end_fill()
bg.bgcolor("lightblue")
turtle.goto(100,0)
print("Happy Birthday Ashfak")

#candles
turtle.penup()
turtle.goto(-90,0)
turtle.color("red")
turtle.left(180)
turtle.pendown()
turtle.forward(20)
turtle.penup()
turtle.goto(-60,0)
turtle.color("blue")
turtle.pendown()
turtle.forward(20)
turtle.penup()
turtle.goto(-30,0)
turtle.color("yellow")
turtle.pendown()
turtle.forward(20)
turtle.penup()
turtle.goto(0,0)
turtle.color("green")
turtle.pendown()
turtle.forward(20)
turtle.penup()
turtle.goto(30,0)
turtle.color("purple")
turtle.pendown()
turtle.forward(20)
bg.bgcolor("orange")

#decoration
colors=["red","orange","yellow","green","blue","purple","black"]
turtle.penup()
turtle.goto(-40,-50)
turtle.pendown()


for each_color in colors:
    anfle=360/len(colors)
    turtle.color(each_color)
    turtle.circle(10)
    turtle.right(50)
    turtle.forward(10)

bg.bgcolor("black")

#Message
turtle.penup()
turtle.goto(-150,50)
turtle.color("pink")
turtle.pendown()


#Name
#print("Happy Birthday Ashfak ")
turtle.write(arg=f"Happy Birthday Alam",align="left", font=("jokerman",24,"normal"))
turtle.done()
