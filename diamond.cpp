#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 0; i <=7; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf(" ");
        }
        for ( k = 4; k >=(i*2) ; k--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
