#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1,num2,ans,answer;
    cout<<"Ashfak Alam\n 22DCS8099 \n";
    cout<<"Please Enter Two Number\n";
    cin>>num1>>num2;
    if (num1==num2)
    {
        cout<<"Area of Square=\n";
        ans=num1*num2;
        cout<<ans;
    }
    else
    {
        cout<<"Area of Rectangle=";
        answer=num1*num2;
        cout<<answer;
    }
    
    return 0;
}
