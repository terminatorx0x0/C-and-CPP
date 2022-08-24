#include<conio.h>
#include<stdio.h>
#define MAX 5
void main()
{
    int i,a[MAX],max=0,min=32767;
    for(i=0;i<MAX;i++)
{
    printf("enter the value: \n");
    scanf("%d \n",&a[i]);
}
for(i=0;i<MAX;i++)
{
if(a[i]>max)
{max=a[i];}
if (a[i]<min)
{min=a[i];}
}
    printf("max=%d ,min=%d",max,min); 
}