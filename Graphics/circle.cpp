#include<graphics.h>
#include<conio.h>
void circleMidPoint(int, int, int);
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circleMidPoint(200,200,100);
    getch();
    return 0;
}
void circleMidPoint(int xcenter, int ycenter, int radius)
{
    int x=0, y=radius,p=1-radius;
    void circlePlotPoint(int,int,int,int);
    circlePlotPoint(xcenter,ycenter,x,y);
    while (x<y)
    {
        x++;
        if (p<0)
        {
            p+=2*x+1;
        }
        else
        {
            y--;
            p+=2*(x-y)+1;
        }
        circlePlotPoint(xcenter,ycenter,x,y);
    }
}

void circlePlotPoint(int xcenter,int ycenter,int x,int y)
{
    putpixel(xcenter+x,ycenter+y,WHITE);
    putpixel(xcenter-x,ycenter+y,WHITE);
    putpixel(xcenter+x,ycenter-y,WHITE);
    putpixel(xcenter-x,ycenter-y,WHITE);
    putpixel(xcenter+y,ycenter+x,WHITE);
    putpixel(xcenter-y,ycenter+x,WHITE);
    putpixel(xcenter+y,ycenter-x,WHITE);
    putpixel(xcenter-y,ycenter-x,WHITE);
}