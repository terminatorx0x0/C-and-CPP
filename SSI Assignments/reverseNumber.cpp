#include<iostream>
using namespace std;
int main()
{
    int n,s=0,t;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
        t=n%10;
        s=s*10+t;
        n=n/10;
    }
    cout<<s;
}