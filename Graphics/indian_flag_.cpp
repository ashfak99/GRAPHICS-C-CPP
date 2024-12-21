#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    rectangle(200,200,200,200);
    return 0;
}
