#include<iostream>
int main(int argc, char const *argv[])
{
    int i,j,k,n;
    cout<< "Please enter the number of row\n";
    cin >> n;
    for ( i = 0; i <= n; i++)
    {
        /* code */
        for ( j = n; j >= i; j++)
        {
            /* code */
            cout << " ";
        }
        for (k=0;k<=(i*2);k++)
        {
            cout << "*";
        }
        cout<<"\n";
    }
    
    return 0;
}

