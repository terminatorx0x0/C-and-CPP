#include<iostream>
using namespace std;
int main()
{
	int A[50];
	int i,n,data;
	cout<<"enter the number of element less than 50:"<<endl;
	cin>>n;
	cout<<"enter the sorted element"<<endl;
	for(i=0;i<n;i++)
	cin>>A[i];
	cout<<"enter the element to be inserted"<<endl;
	cin>>data;
	for(i=1;i<n;i++)
	{
		if(A[i]>data&&A[i-1]<data)
		{
			for(int j=n;j>i;i--)
			{
			 A[j]=A[j-1];
	     	}
	     	A[i]=data;
	     	break;
		}
    }
	cout<<"---Element after Insertion---"<<endl;
	for(i=0;i<n;i++)
	cout<<A[i]<<",";
}
