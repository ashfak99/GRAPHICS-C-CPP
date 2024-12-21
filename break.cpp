/*#include<iostream>
#include<conio.h>
using namespace std;/*
int main(int argc, char const *argv[])
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (i==5)
        {
            break;
        }
        cout<<i<<"\n";
    }
    
    return 0;
}
int main(int argc, char const *argv[])
{
    struct my_name.A;
    {
        char *fname;
        int phone,age,height;
    } 
    A.fname="King Ashfak";
    A.phone="9953372531";
    A.age="18";
    A.height="5.8";
    cout<<"\n Content of Object A"<<endl;
    cout<<"Name="<<A.fname<<endl;
    cout<<"Age="<<A.age<<endl;
    cout<<"Height"<<A.height<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,b,c[10][10];
    for ( i = 0; i <2; i++)
    {
        for ( b = 0; b < 2; b++)
        {
            cout<<"Please enter the number\n";
            cin>>c[i][b];
        }
        
    }
    /*for ( i = 0; i <6; i++)
    {
        for ( b = 0; b < 6; b++)
        {
            cin>>c[i][b];
        }
        
    }*/
    cout<<"Output\n";
    for ( i = 0; i <2; i++)
    {
        for ( b = 0; b < 2; b++)
        {
            cout<<c[i][b]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

