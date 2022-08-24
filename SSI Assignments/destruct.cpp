#include<iostream>
using namespace std;
class A
{
 int a;
 public:A()
 {
     cout<<"default constructor"<<endl;
 }
 A(int x)
 {
     a=x;
     cout<<"para constructor created"<<endl;
 }
 ~A()
 {
     cout<<"constructor deleted"<<endl;
 }
void show()
{
    cout<<"value of a="<<a<<endl;
}
};
main()
{
A a,a1(20);             //no. of tym object created,destructor called
a1.show();
}