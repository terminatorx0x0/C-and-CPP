#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[100];
    int x,i,count=0;
    cout<<"Enter the number";
    cin>>c;
    x=strlen(c);
    for ( i = 0; i < x; i++)
    {
        count++;
    }
    cout<<count;
}
