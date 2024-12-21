#include<graphics.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI\\");
    line(100,100,200,200);
    linerel(300,100);
    lineto(300,10);
    getch();
    return 0;
}
