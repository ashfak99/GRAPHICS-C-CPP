#include<graphics.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    arc(50,50,0,180,30);
    circle(200,200,50);
    pieslice(300,300,0,360,50);
    getch();
    return 0;
}
