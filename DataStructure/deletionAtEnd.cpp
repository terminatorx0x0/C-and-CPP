#include<iostream>
using namespace std;
int main()
{
	int A[50];
	int i,n;
	cout<<"enter the number of element less than 50:"<<endl;
	cin>>n;
	cout<<"enter the element"<<endl;
	for(i=0;i<n;i++)
	cin>>A[i];
	--n;
	cout<<"---Element after deletion---"<<endl;
	for(i=0;i<n;i++)
	cout<<A[i]<<",";
}
