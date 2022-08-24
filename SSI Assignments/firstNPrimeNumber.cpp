#include<iostream>
using namespace std;
int main()
{
    int i=2,n,p=1,m;
    cout<<"enter the number";
    cin>>n;
    while(p<=n)
    {
        m=0;
        for(int j=2;j<=i/2;j++)
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
            p++;
        }
        i++;
    }
}