#include<stdio.h>
int main(int argc, char const *argv[])
{
   char ch;
   printf("Please enter (a-z)/(A-Z)\n");
   scanf("%s",ch);
   if (ch>='a' && ch<='z')
   {
    printf("Small letter\n");
   }
   else if (ch>='A' && ch<='Z')
   {
    printf("Capital Letter\n");
   }
   else
   printf("Wrong");
   
    return 0;
}
