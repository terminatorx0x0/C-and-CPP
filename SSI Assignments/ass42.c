#include<conio.h>
#include<stdio.h>
#define MAX 5
void main()
{
    int i,a[MAX];
    for(i=0;i<MAX;i++)
{
    printf("enter the value: \n");
    scanf("%d \n",&a[i]);
}
for(i=0;i<MAX;i++)
{
if(i%2==0)
{
    printf("%d is even \n",a[i]);
}
else
{
    printf("%d is odd \n",a[i]);
}
} 
}