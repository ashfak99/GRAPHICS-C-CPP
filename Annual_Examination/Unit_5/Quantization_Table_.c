#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int i,j;
    int q[10][10],n,quality;
    printf("Enter the Quality : ");
    scanf("%d",&quality);
    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            q[i][j]=0;
            q[i][j]=1+(1+i+j)*quality;
        }
    }
    printf("\n");
    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            printf("%d\t",q[i][j]);
        }
        printf("\n");
    }
    return 0;
}
