/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 0; i <= 5; i++)
    {
        for ( k = 4; k >=i; k--)
        {
            cout<<" ";
        }
        
        for ( j = 0; j <=i*2; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=0;
    while (++i<=5)
    {
        int j=5,k=1;
        while (--j>=i)
        {
            cout<<" ";
        }
        while (++k<=(i*2))
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}

*/
#include<iostream>
using namespace std;
class are

{
public:
   int area,length,base,height,ch,answer,ans,answ,answe;
   void getdata(void);
   void display(void);
};

void are::getdata(void)
{
    cout<<"1.Area of Square\n2.Area of Rectangle\n3.Volume of cube\n4.Volume of Cuboid\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
          cout<<"Please Enter the Value of Side\n";
          cin>>area;
          ans=area*area;
        break;
    case 2:
          cout<<"Please Enter the Lenght and base of Reactangle\n";
          cin>>length>>base;
          answ=length*base;
        break;
    case 3:
          cout<<"Please Enter side of Cube";
          cin>>area;
          answe=area*area*area;
          break;
    case 4:
          cout<<"Please enter the length , base and height of cuboid\n";
          cin>>length>>base>>height;
          answer=length*base*height;
          break;
    }
}
void are::display(void)
{
    switch (ch)
    {
    case 1:
           cout<<"Area of Square="<<ans;
        break;
    case 2:
           cout<<"Area of Rectangle"<<answ;
        break;
    case 3:
           cout<<"Volume of Cube="<<answe;
           break;
    case 4:
           cout<<"Volume of Cuboid="<<answer;
           break;
    }
}
int main(int argc, char const *argv[])
{
    cout<<"Ashfak Alam\n 22DCS8009"<<endl;
    are a;
    a.getdata();
    a.display();
    return 0;
}
