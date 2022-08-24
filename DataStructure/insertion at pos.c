//Insertion at given location in Array
#include<stdio.h>
int main()
{
	int n,i,data,loc,j;
	int A[40];
	printf("Enter the size of the array less 40");
	scanf("%d",&n);
	printf("Elemnt of Array are:");
	for(i=0;i<n;i++)   //Enter the element of array
	{
		scanf("%d",&A[i]);
	}
	printf("\n Enter the Element to be inserted");
	scanf("%d",&data);
	printf("\nEnter the position of insertion");
	scanf("%d",&loc);
		if(n>=39)
	{
		printf("Array is overflow and stop");
		
	}
	else
	{
		n++;                   // Shifting element right to the right
		for(j=n;j>=loc;j--)
		   A[j] = A[j-1];
		A[--loc]=data;
		
		printf("\n ---Element of array after insertion----");
		for(i=0;i<n;i++)      // Display elemnt element of array after insertion
		    printf("\n\t%d",A[i]);
		printf("\n");
	}
	
	return 0;	
}

