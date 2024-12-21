#include<stdio.h>
#include<string.h>
#include<alloca.h>
int main(int argc, char const *argv[])
{
    char *str="AsHfAk",*pr,*str1[20];
    printf("String perior of strlew:%s\n",str);
    strlwr(str);
    printf("String after strlwr:%s\n",str);
    pr=strupr(str);
    printf("%s\n",pr);
    printf("%d\n",strlen(str));
    
    return 0;
}
