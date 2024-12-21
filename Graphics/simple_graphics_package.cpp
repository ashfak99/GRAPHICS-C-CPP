#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void slope_bw_45_(int,int,int,int);
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    slope_bw_45_(10,10,100,100);
    getch();
    return 0;
}

void slope_bw_45_(int x,int y,int x2,int y2){
    int yf=y;
    x=x;
   int  m=(y2-y)/(x2-x);
    while (x<=x2)
    {
        y=abs(yf+0.5);
        putpixel(x,y,14);
        x++;
        yf=yf+m;
        delay(20);
    }
}