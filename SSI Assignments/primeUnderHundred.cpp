#include<iostream>
using namespace std;
int main()
{
    int i,j,m;
    for(i=2;i<=100;i++)
    {   
        m=0;
        for(j=2;j<=i/2;j++)   //here we taken j<=i/2 because if we cant do it then it divide by itself
        {                     //and then m++ 
           if (i%j==0)
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