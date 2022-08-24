#include<iostream>
using namespace std;
int main()
{
    int i,j,m,f,l;
    cout<<"enter the first and last number respectively:"<<endl;
    cin>>f>>l;
    for(i=f;i<=l;i++)
    {
        m=0;
        for(j=2;j<=f/2;j++)
        {
            if(i%j==0)
            {
                m++;
                break;
            }
        }
        if(m==0)
        {
            cout<<i<<endl;
        }
    }
} 