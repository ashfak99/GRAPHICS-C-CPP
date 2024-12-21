#include<graphics.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    int width,height;
    initgraph(&gd,&gm,"");
    width=getmaxx()+1;
    height=getmaxy()+1;
    printf("\nScreen Resolution : %dx%d ",width,height);
    closegraph();
    return 0;
}
