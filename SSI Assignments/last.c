#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,r,sum=0;
    printf("enter the value:\n");
    scanf("%d",&n);
    while (n>0)
    {
r=n%10;
sum=sum*10+r;
break;
    }
    printf("%d",sum);
}