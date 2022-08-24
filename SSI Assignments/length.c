#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,x=0;
    printf("enter the value:\n");
    scanf("%d",&n);
    while (n>0)
    {
     n=n/10;
     x++;
    }
    printf("%d",x);
} 