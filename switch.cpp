#include<iostream>
using  namespace std;
int main(int argc, char const *argv[])
{
    char operator1;
    float num1,num2;
    cout<<"Ashfak Alam\n 22DCS8009\n";
    cout<<"Enter operator\n";
    cin>>operator1;
    cout<<"Please Enter two number\n";
    cin>>num1>>num2;
    switch (operator1)
    {
    case '+':
         cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
    default:
    cout<<"Wrong input";
    case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
    /*default:
    cout<<"Wrong Input";
        break;*/
    }
    return 0;
}
