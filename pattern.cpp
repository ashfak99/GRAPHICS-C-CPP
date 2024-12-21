#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n,z;
    printf("Ashfak Alam\n22DCS8009\n");
    printf ("Please enter the number of row\n");
    scanf("%d\n",&n);
    for ( i = 0; i <= n; i++)
    {
        /* code */
        for ( j = n; j >= i; j--)
        {
            /* code */
            printf(" ");
        }
        for (k=0;k<=(i*2);k++)
        {
            printf("%d",j+1);
            
        }
        printf("\n");
    }
    
    return 0;
}

