#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void getdata()
    {
        a=100;
        cout<<"value of a ="<<a<<endl;
    }
friend void show(A x);
};
void show(A x)
{
    cout<<"private data="<<x.a;
}
 main()
{
    A a1;
    a1.getdata();
    show(a1);
}