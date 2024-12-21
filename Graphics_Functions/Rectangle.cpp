#include<graphics.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    rectangle(100,100,300,200);
    getch();
    return 0;
}
