#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m;
    cout<<"enter the number whose next prime u want to know:";
    cin>>n;
    for(i=n;;i++)
    {
        m=0;
        for(j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                m++;
                break;
            }
        }
        if(m==0)
    {
        if(i>n)
        {
        cout<<i;
        break;
        }
    }
    }
}