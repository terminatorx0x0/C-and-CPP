#include<stdio.h>
int main()
{
    int i,a[100],search,n;
    printf("enter the number of integer");
    scanf("%d",&n);
 printf("enter %d value: \n",n);
    for(i=0;i<n;i++)
    scanf("%d \n",&a[i]);

printf(" \n enter the element to search"); 
scanf("%d",&search);

for(i=0;i<n;i++)
{
if(a[i]==search)
{
    printf("%d is present at location %d",search,i+1);
    break;
}
}
if (i==n)           
printf("not found");
return 0;
}