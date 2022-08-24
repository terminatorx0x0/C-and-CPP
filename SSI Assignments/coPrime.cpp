#include<iostream>
using namespace std;
int main()
{
    int i,a,b,hcf;
    cout<<"enter the two number";
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {  
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    if(hcf==1)
    {
        cout<<"co-prime";
    }
    else{
        cout<<"not co-prime";
    }
}