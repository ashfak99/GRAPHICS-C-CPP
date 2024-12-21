#include<stdio.h>
#include<graphics.h>
int drawline(int,int,int,int);
int main()
{
    int gd=DETECT,gm,x0=10,y0=10,x1=100,y1=400;
   // initgraph(&gd,&gm," ");
   // printf("\n Enter the coordinates for 1st point of a line: ");
   // scanf("%d%d",&x0,&y0);  

    //printf("\n Enter the coordinates for 2nd point of a line: ");
    //scanf("%d%d",&x1,&y1);  
      
    initgraph(&gd,&gm,"");
    drawline(x0,y0,x1,y1);
    getch();
    return 0;
}
int drawline(int x0,int y0,int x1,int y1)
{
    int dx,dy,p,x,y;
    dx=x1-x0;
    dy=y1-y0;

    x=x0;
    y=y0;

    p=2*dy-dx;

    while (x<x1)
    {
        if (p>=0)
        {
            putpixel(x,y,7);
            y++;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p=p+2*dy;
        }
        x++;
    }
    
}