/*#include<stdio.h>
#include<conio.h>
struct object
{
    int codeno;
    float price;
    int qty;
};
int main(int argc, char const *argv[])
{
    struct object a,*b;
    a.codeno= 20;
    a.price=200.13;
    a.qty=23;
    printf("%d\n",a.codeno);
    printf("%f\n",a.price);
    printf("%d\n",a.qty);
    b->price=213.13;
    b->codeno=34;
    b->qty=29;
    printf("%d\n",b->codeno);
    printf("%f\n",b->price);
    printf("%d\n",b->qty);
    return 0;
}*/

/*#include<iostream>
#include<conio.h>
using namespace std;
struct object
{
    int codeno;
    float price;
    int qty;

};

int main(int argc, char const *argv[])
{
    struct object a,*b;
    a.codeno=20;
    a.price=200.23;
    a.qty=29;
    cout<<"\n codenp :"<<a.codeno;
    cout<<"\n price ;"<<a.price;
    cout<<"\n qty :"<<a.qty;
    b->codeno=25;
    b->price=290.34;
    b->qty=13;
    cout<<"\n codeno ;"<<b->codeno;
    cout<<"\n price ;"<<b->price;
    cout<<"\n qty :"<<b->qty;
}
*/
#include<iostream>
#include<conio.h>
using namespace std;
class object
{

public:
    int codeno;
    float price;
    int qty;

};

int main(int argc, char const *argv[])
{
    object one;
    one.codeno=29;
    one.price=120.847;
    one.qty=34;
    cout<<"\n "<<one.codeno;
    cout<<"\n "<<one.price;
    cout<<"\n "<<one.qty;
    return 0;
}
