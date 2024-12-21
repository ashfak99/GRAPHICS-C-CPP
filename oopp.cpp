#include<iostream>
using namespace std
    class oopp
    {
    public:
        int num1,num2;
        char name[30],course;
        getdata(void);
        display(void);
    };
    
   void oopp::getdata(void)
    {
        cout<<"Please enter the name\n";
        cin>>name<<endl;
        cout<<"Enter Course\n";
        cin>>course<<endl;
    }
    
   void  oopp::display(void)
    {
        cout<<name<<endl;
        cout<<course<<endl;
    }
    
int main(int argc, char const *argv[])
{
    oopp o;
    o.getdata();
    o.display();

}

