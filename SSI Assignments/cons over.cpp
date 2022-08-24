#include<conio.h>
#include<iostream>
using namespace std;
class A
{
int a,b,c;    
public:A()
{
    cout<<"default constructor"<<endl;
    c=100;
}
A(int x,int y)
{
    cout<<"para constructor"<<endl;
    a=x;
    b=y;
    c=a+b;
}
void show()
{
    cout<<"add is ="<<c<<endl;
}
};
main()
{
    A a(10,30),a1;
    a.show();
    a1.show();
}