#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
#define round((int)(a+0.5))
void drawline_DDA(int x1,int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y2-y1;
    int steps;
    if (abs(dx)>abs(dy))
    {
        steps=dx;
    }
    else{
        steps=dy;
    }
    float yincrement=dy
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
