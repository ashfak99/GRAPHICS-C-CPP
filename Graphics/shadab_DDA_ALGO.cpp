#include <iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    int x1=100, y1=260, x2=250, y2=400, dx, dy, steps, xinc, yinc;
    initgraph(&gd,&gm," ");
    dx=x2-x1;
    dy=y2-y1;
    
    if(abs(dx)>abs(dy))
    steps=abs(dx);
    else 
    steps=abs(dx);
    
    xinc=dx/steps;
    yinc=dy/steps;
    
    for(int i=0; i<steps; i++)
    {
        putpixel(x1, y1, 3);
        x1=x1+xinc;
        y1=y1+yinc;
        
        delay(10);
    }
        getch();
        closegraph();
    return 0;
}
