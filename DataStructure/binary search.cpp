#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int AR[50],item,n,index,i;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    cout<<"enter the array element in ascending order:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>AR[i];
    }
    cout<<"enter the element to search:"<<endl;
    cin>>item;
    int beg=0,last=n-1,mid;
    while (beg>=last)
    {
        mid=(beg+last)/2;
    }
    
}