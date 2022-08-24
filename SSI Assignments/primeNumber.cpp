#include<iostream>
using namespace std;
int main()
{
    int n,i,m=0;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            m++;
        }
    }
    if(m<2)
    {
        cout<<"prime num:";
    }
    else{
        cout<<"not prime";
    }
}