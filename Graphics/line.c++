#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
void dda_algo(int,int,int,int);
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI\\");
    dda_algo(100,150,300,150);
    dda_algo(100,150,100,350);
    dda_algo(300,150,300,350);
    dda_algo(100,350,300,350);
    dda_algo(300,350,450,300);
    dda_algo(450,350,450,150);
    dda_algo(450,150,300,150);
    getch();
    return 0;
}
void dda_algo(int x,int y,int x2,int y2){
 int dx,dy,xinc,yinc,step,i;
    dx=x2-x;
    dy=y2-y;

   if (abs(dx)>abs(dy))
   {
    step=abs(dx);
   }
   else
   {
    step=abs(dy);
   }
   
    xinc=dx/step;
    yinc=dy/step;
    for ( i = 0; i <= step; i++)
    {
        putpixel(x,y,15);
        //delay(10);
        x+=xinc;
        y+=yinc;
    }
}