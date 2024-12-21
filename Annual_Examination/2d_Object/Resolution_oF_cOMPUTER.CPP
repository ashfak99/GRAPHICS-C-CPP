#include<stdio.h>
#include<math.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int x,y;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    x=getmaxx();
    y=getmaxy();
    printf("X = %d",x);
    printf("\nY = %d",y);
    return 0;
}
