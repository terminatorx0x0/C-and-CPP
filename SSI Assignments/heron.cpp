#include<iostream>
using namespace std;
class Area
{
    public:float area;
           int r;
    void input()
    {cout<<"enter the value:"<<endl;
    cin>>r;}
    void show()
    {area=3.14*r*r;
    
main()2
{
Area a;
a.input();
a.show();
}