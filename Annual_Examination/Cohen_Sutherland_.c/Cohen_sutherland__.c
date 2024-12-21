#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int Lx,Ly,Rx,Ry;
    int xmin=Lx, ymin=Ly, xmax=Rx, ymax=Ry;

    int Ax,Ay,Bx,By;
    int Cx,Cy,Dx,Dy;
    int Ex,Ey,Fx,Fy;
    int Gx,Gy,Hx,Hy;
    int Ix,Iy,Jx,Jy;

    printf("Enter the left-hand Corner: ");
    scanf("%d %d",&Lx,&Ly);
    printf("Enter the right-hand Corner: ");
    scanf("%d %d",&Rx,&Ry);

    printf("Enter the coordinate of AB endpoint A and B :  ");
    scanf("%d %d %d %d",&Ax,&Ay,&Bx,&By);

    printf("Enter the coordinate of CD endpoint C and D :  ");
    scanf("%d %d %d %d",&Cx,&Cy,&Dx,&Dy);

    printf("Enter the coordinate of EF endpoint E and F :  ");
    scanf("%d %d %d %d",&Ex,&Ey,&Fx,&Fy);

    printf("Enter the coordinate of GH endpoint G and H :  ");
    scanf("%d %d %d %d",&Gx,&Gy,&Hx,&Hy);

    printf("Enter the coordinate of IJ endpoint I and J :  ");
    scanf("%d %d %d %d",&Ix,&Iy,&Jx,&Jy);

    return 0;
}
