#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#define ROUND(a)((int)(a+0.5))
void lineDDA(int x1,int y1,int x2,int y2)
{
    int dx=x2-x1, dy=y2-y1, steps,k;
    float xIncrement, yIncrement,x=x1,y=y1;
    if (abs(dx)> abs(dy)) 
    {
        steps=abs(dx);
        xIncrement=dx/(float) steps;
        yIncrement=dy/(float)steps;
        for ( k = 0; k < steps; k++)
        {
            x+=xIncrement;
            y+=yIncrement;
            putpixel(ROUND(x),ROUND(y),LIGHTGREEN);
            delay(100);
        }
    }
    
}
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
    lineDDA(30,60,90,120);
    getch();
    return 0;
}
