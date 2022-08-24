#include<iostream>
using namespace std;
int main()
{
    int t,i,s;
    cout<<"enter the number";
    cin>>t;
    for ( i = 1; i <= 10; i++)
    {
        s=t*i;
        cout<<t<<"*"<<i<<"="<<s<<endl;
    }
}