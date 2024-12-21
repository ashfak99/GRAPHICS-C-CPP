#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float sum (int , float);
    int a=20;
    float s,b=20;
    s=sum(a,b);
    cout<< "sum=" << s;
    
    return 0;
}
float sum (int x, float y)
{
     return(x+y);
}