#include<stdio.h>
int main()
{
    int a[2][3],b[3][3],c[3][3],x,y,z;
    printf("Please enter the first matrix");
    for ( x = 0; x <= 3; x++)
    {
        /* code */
        for (y = 0; y <= 3;y++)
        {
            /* code */printf("Enter the number");
            scanf("%d",&(*(*(a+x)+y)));
        }
        
    }
    printf("First matrix is\n");
    for ( x = 0; x <= 3; x++)
    {
        /* code */
        for ( y = 0; y <= 3; y++)
        {
            /* code */
            printf("%d\n",(*(*(a+x)+y)));
        }
        
    }
    
    return 0;
}