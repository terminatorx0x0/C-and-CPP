#include<iostream>
using namespace std;
int main()
{
	int A[50];
	int i,n,data;
	cout<<"enter the number of element less than 50:"<<endl;
	cin>>n;
	cout<<"enter the element"<<endl;
	for(i=0;i<n;i++)
	cin>>A[i];
	cout<<"enter the element to be deleted"<<endl;
	cin>>data;
	for(i=0;i<n;i++)
	{
		if(A[i]==data)
		{
			for(int j=i;j<n;j++)
			{
				A[j]=A[j+1];
			}
		}
	}
	--n;
	cout<<"---Element after deletion---"<<endl;
	for(i=0;i<n;i++)
	cout<<A[i]<<",";
}
