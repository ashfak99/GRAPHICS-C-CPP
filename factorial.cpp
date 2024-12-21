#include<stdio.h>
#include<conio.h>
int main()
{
    double long no,i,fac=1;
    printf("Please enter the number\n");
    scanf("%d",&no);
    for ( i = 1; i <= no; i++)
    {
        fac=fac*i;
        
    }
    printf("Fctorial of %d is %d",no,fac);
    getch();
    return 0;
}