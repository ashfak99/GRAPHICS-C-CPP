#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT, gm,i;
    initgraph(&gd,&gm,"");
    for(i=1;i<=3000000;i++)
    {
        setcolor(rand()%10);
        circle(rand()%600,rand()%500,rand()%20);
        delay(20);
    }
    getch();
    closegraph();
    return 0;

}