#include<iostream>
using namespace std;
int main()
{
    int i,n,a=-1,b=1,c;
    cout<<"enter the number";
    cin>>n;
    for ( i = 0; i < n ; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if (c==n)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}