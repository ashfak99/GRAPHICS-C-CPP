#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     int i,b,c[10][10],d[10][10],mul[10][10];
    for ( i = 0; i <2; i++)
    {
        for ( b = 0; b < 2; b++)
        {
            cout<<"Please enter the first matrix\n";
            cin>>c[i][b];
        }
        
    }
    for ( i = 0; i <2; i++)
    {
        for ( b = 0; b < 2; b++)
        {
            cout<<c[i][b]<<" ";
        }
        cout<<"\n";
    }
     cout<<"second matrix\n";
     for ( i = 0; i <2; i++)
    {
        for ( b = 0; b < 1; b++)
        {
            cout<<"Please enter the second matrix\n";
            cin>>d[i][b];
        }
        cout<<"\n";
    }
     for ( i = 0; i <2; i++)
    {
        for ( b = 0; b < 1; b++)
        {
            cout<<d[i][b]<<" ";
        }
        cout<<"\n";
    }
     for ( i = 0; i <2; i++)
    {
        for ( b = 0; b < 2; b++)
        {
            mul[i][b]=c[i][b]*d[i][b];
            cout<<mul[i][b];
        }
        cout<<"\n";
    }
//    cout<<"Multiplication ="<<mul[i][b];
    return 0;
}
