/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i;
    for ( i = 0; i <15; i++)
    {
        /* code */
        /*cout<< setw(4) << i;
        int cube=i*i*i;
      /* cout << setw(6) << cube << endl;
      cout << cube<<" \n";
    }
    
    return 0;
}
*/

/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i;
    unsigned int a;
    unsigned long fact=1;
    cout<< "Enter the number : \n";
    cin >> a;
    for ( i =a; i>0; i--)
    {
        fact*=i;
        cout<<"Fctorial is \n" << fact;
    }
    
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int x;
    cout<< "Enter a number: \n";
    cin >> x;
    if (x > 100)
    {
        cout << "That number " << x;
        cout << " is greater than 100\n";
    }
    else
    {
        cout << "That number is not greater than 100\n";
    }
    
    
    return 0;
}
*/
/*#include<iostream>
using namespace std;
#include<process.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    char dir='a';
    int x=10, y=10;
    while (dir!= '\r')
    {
        cout << "\n Your location is" << x <<"," << y;
        cout << "\n Enter direction (n,s,e,w): ";
        dir = getche();
        switch (dir)
        {
        case 'n':y--;
            break;
        case 's': y++; break;
        case 'e': x++; break;
        case 'w': x--;
        
            break;
        }
        if (x==7 && y==1)
        {
            cout << "\n You found the treasure!\n";
            exit(0);
        }
        
    }
    
    
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=1;
    while (++n<=20)
    {
        cout<< n <<"\n" ;
    }
    
    return 0;
}