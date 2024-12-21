/*#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int s;
    struct as
    {
        /* data 
        int roll_no;
        int id;
        char name[100];
        char course;
        float fees;

    };
    
    struct as stud[10];
    
    for ( s = 0; s < 10; s++)
    {
        /* code 
        printf("Please enter the roll no\n");
        scanf("%d\n",&stud[s].roll_no);
        printf("please enter the id\n");
        scanf("%d\n",&stud[s].id);
        printf("Please enter the name\n");
        scanf("%s\n",&stud[s].name);

    }
    printf("\nOur output is\n");
    for ( s = 0; s < 10; s++)
    {
        /* code 
        printf("%d %d %s\n",stud[s].roll_no,stud[s].id,stud[s].name);
    }
    
    return 0;
} 
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Please enter the number"<<endl;
    cin>>num;
    if (num<=0)
    {
        cout<<"Number is wrong";
    }
    else if (num>=0 && num<=44)
    {
        cout<<"Fail";
    }
    
    else if(num>=45 && num<=59)
    {
        cout<<"C grade ";
    }
    else if (num>=60 && num<=74)
    {
        cout<<"b grade";
    }
    else if (num>=75 && num<=100)
    {
        cout<<"A grade";
    }
    
    
    return 0;
}
