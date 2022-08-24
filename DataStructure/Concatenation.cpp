#include<iostream>
using namespace std;
int main()
{

	int i,n1,n2;
	int A[50],B[50],C[100];
	cout<<"enter the number of element of A less than 50:"<<endl;
	cin>>n1;
	cout<<"enter the number of element of B less than 50:"<<endl;
	cin>>n2;
	cout<<"enter the element of A:"<<endl;
	for(i=0;i<n1;i++)
	cin>>A[i];
	cout<<"enter the element of B:"<<endl;
	for(i=0;i<n2;i++)
	cin>>B[i];
	for(i=0;i<n1+n2;i++)
	{
		if(i<n1)
		C[i]=A[i];
		else
		C[i]=B[i-n1];
	}
	cout<<"---Element after concatenation---"<<endl;
	for(i=0;i<n1+n2;i++)
	cout<<C[i]<<",";
}
