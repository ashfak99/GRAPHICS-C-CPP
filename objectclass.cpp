#include<iostream>
using namespace std;
class person
{
     char name[20];
     int fees,id_no;
     char course[30];

public:
    void getdata(void);
    void display(void);
    
};

 void person::getdata(void)
{
    cout<<"\nEnter ID:";
    cin<<id_no;
    cout<<"\nEnter name:";
    cin>>name;
    cout<<"\nEnter Course :";
    cin>>course;
    cout<<"\nEnter Fees :";
    cin>>fees;
}

void person::display(void)
{
    cout<<"\nID :"<<id_no;
    cout<<"\nName : "<<name;
    cout<<"\nCourse :"<<course;
    cout<<"\nFees :"<<fees;
}

int main(int argc, char const *argv[])
{
    cout<<"\nAshfak Alam\n 22DCS8009\n";
    person p;
    p.getdata();
    p.display();
    return 0;
}
