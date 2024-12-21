#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
        initgraph(&gd,&gm,"");
    int x1=100,x2=200,y1=200,y2=300;
    int dx=abs(x1-x2),dy=abs(y1-y2);
    int p=2*dy-dx;
    int twoDy=2*dy, twoDyDx=2*(dy-dx);
    int x,y,xEnd;
    if (x1>x2)
    {
        x=x2;
        y=y2;
        xEnd=x1;
    }
    else
    {
        x=x1;
        y=y1;
        xEnd=x2;
    }
    while (x<xEnd)
    {
        x++;
        if (p<0)
        {
            p+=twoDy;
        }
        else{
            y++;
            p+=twoDyDx;
        }
        putpixel(x,y,LIGHTBLUE);
    }
    getch();
    return 0;
}
