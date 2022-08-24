#include<iostream>
using namespace std;
class A
{
int a;
public:A()
{
    cout<<"u r in base class"<<endl;
    a=10;
}
void show()
{
cout<<"value of A="<<a<<endl;
}};
class B:virtual public A
{
    int b;
    public:B()
    {
        cout<<"u r in inter-1 class"<<endl;
        b=20;
    }
    void show()
    {
        cout<<"value of B="<<b<<endl;
    }
};
class C:virtual public A
{
    int c;
    public:C()
    {
        cout<<"u r in inter-2 class"<<endl;
        c=30;
    }
    void show()
    {
        cout<<"value of C="<<c<<endl;
    }
};
class D:public B,public C
{
    int d;
    public:D()
    {
        cout<<"u r in derived class"<<endl;
        d=40;
    }
    void show()
    {
        cout<<"value of D="<<d;
    }
};
 main()
{
    D c1;
    c1.A::show();
    c1.B::show();
    c1.C::show();
    c1.show();
}