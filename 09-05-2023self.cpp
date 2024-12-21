/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int j,i,k;
    for ( i = 0; i <= 5; i++)
    {
        for ( j = 5; j >= i; j--)
        {
            cout<<" ";
        }
        for ( k = 0; k <=(i*2); k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}
*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 0; i <=5; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}
*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,k;
    i=0;
    while (++i<=5)
    {
        j=5;
        k=1;
        while (--j>=i)
        {
            cout<<" ";
        }
        while (++k<=i*2)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    
    return 0;
}
*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char operator1;
    int num1,num2,ans;
    cout<<"Please choose any one of these\n +\n-\n*\n/\n";
    cin>>operator1;
    switch (operator1)
    {
    case '+':
        cout<<"Please Enter two number \n";
        cin>>num1>>num2;
        ans=num1+num2;
        cout<<num1<<"+"<<num2<<"="<<ans;
        break;
    case '-':
        cout<<"Please Enter two number\n";
        cin>>num1>>num2;
        ans=num1-num2;
        cout<<num1<<"-"<<num2<<"="<<ans;
        break;
    case '*':
        cout<<"Please Enter Two Number\n";
        cin>>num1>>num2;
        ans=num1*num2;
        cout<<num1<<"*"<<num2<<"="<<ans;
        break;
    case '/':
        cout<<"Please Enter Two Number\n";
        cin>>num1>>num2;
        ans=num1/num2;
        cout<<num1<<"/"<<num2<<"="<<ans;
        break;
    }
    return 0;
}
*
#include<iostream>
using namespace std;
class alam
{
public:
    char name[30],course[40];
    void getdata(void);
    void display(void);
};

void alam::getdata(void)
{
    cout<<"Please Enter your name\n";
    cin>>name;
    cout<<"Please Enter Your Course\n";
    cin>>course;
}

void alam::display(void)
{
    cout<<"Name :-"<<name<<endl;
    cout<<"Course:-"<<course;
}

int main(int argc, char const *argv[])
{
    alam a;
    a.getdata();
    a.display();

    
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1,num2,ans;
    cout<<"Please Enter Two Number\n";
    cin>>num1>>num2;
    if (num1==num2)
    {
        ans=num1*num1;
        cout<<"Area of Square :-"<<ans;
    }
    else
    {
        ans=num1*num2;
        cout<<"Area of Rectangle :-"<<ans;
    }
    
    return 0;
}
