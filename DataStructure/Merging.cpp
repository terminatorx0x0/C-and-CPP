#include<iostream>
using namespace std;
int main()
{

	int i,j,k,n1,n2;
	int A[50],B[50],C[100];
	cout<<"enter the number of element of A less than 50:"<<endl;
	cin>>n1;
	cout<<"enter the number of element of B less than 50:"<<endl;
	cin>>n2;
	cout<<"enter the sorted element of A:"<<endl;
	for(i=0;i<n1;i++)
	cin>>A[i];
	cout<<"enter the sorted element of B:"<<endl;
	for(i=0;i<n2;i++)
	cin>>B[i];
	for(i=0,k=0;i<n1,k<n1+n2;i++,k++)
	{
		if(A[i]<B[j])
		C[k]=A[i];
		else
	  	C[k]=B[j];
	}
	cout<<"---Element after concatenation---"<<endl;
	for(k=0;i<n1+n2;i++)
	cout<<C[k]<<",";
}
