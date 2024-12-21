#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3],f,i,d,b[3][3];
    float c[3][3];
    printf("Please enter the first matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( f = 0; f < 3; f++)
        {
            printf("Please enter the number\n");
            scanf("%d",&a[i][f]);
        }
        
    }
    printf("Our matrix is\n");
    for ( i = 0; i < 3; i++)
    {
        for ( f = 0; f < 3; f++)
        {
            printf("%3d",a[i][f]);
        }
        printf("\n");
    }
   /* for ( i = 0; i < 3; i++)
    {
        for ( f = 0; f < 3; f++)
        {
            d=a[i][0];
            a[i][0]=a[i][3];
            a[i][3]=d;
        }
        
    }
    printf("After swaping our matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( f = 0; f < 3; f++)
        {
            printf("%3d",a[i][f]);
        }
        printf("\n");
    }
    */
   printf("\nOur second matrix\n");
   for ( i = 0; i < 3; i++)
   {
    for ( f = 0; f < 3; f++)
    {
        printf("Please enter the number\n");
        scanf("%d",&b[i][f]);
    }
    
   }
   printf("\nOur second matrix\n");
   for ( i = 0; i <3 ; i++)
   {
    for ( f = 0; f < 3; f++)
    {
        printf("%3d",b[i][f]);
    }
    printf("\n");
    
   }
   printf("\nMultiply is\n");
    for ( i = 0; i < 3; i++)
    {
        for ( f = 0; f < 3; f++)
        {
            c[i][f]=a[i][f]-b[i][f];
            printf("%3f",c[i][f]);
        }
        printf("\n");
    }
    
    
    return 0;
}
