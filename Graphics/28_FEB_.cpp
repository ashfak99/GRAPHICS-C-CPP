#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
 typedef float Matrix3x3 [3][3];
 Matrix3x3 theMatrix;

void matrix3x3SetIdentity(Matrix3x3& m)
{
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            m[i][j] = (i == j) ? 1 : 0;
        }
    }
}

void matrix3x3PreMultiply (Matrix3x3 a, Matrix3x3 b)
{
    int r,c;
    Matrix3x3 tem;
    for ( r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            tem[r][c]=a[r][0]*b[0][c]+ a[r][1]*b[1][c] + a[r][2]*b[2][c] ;
        }
    }
    for ( r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            b[r][c]=tem[r][c];
        }
    }
}

void translate2(int tx,int ty)
{
    Matrix3x3 m;
    matrix3x3SetIdentity (m);
    m[0][2] = tx;
    m[1] [2] = ty;
    matrix3x3PreMultiply(m,theMatrix);
}

void scale2(float sx, float sy,wcPt2 refpt)
{

}