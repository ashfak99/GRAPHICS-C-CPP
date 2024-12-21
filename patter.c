#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 0; i <= 5; i++)
    {
        for ( j = 5; j<=(5-i); j++)
        {
            printf(" ");
        }
        
        for (k=0; k<=((2*i)-1); k++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
