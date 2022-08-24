#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max;
printf("enter the number");
scanf("%d",&a);
printf("enter the number");
scanf("%d",&b);
printf("enter the number");
scanf("%d",&c);
max=a;
if(max<b)
max=b;
if(max<c)
max=c;
printf("%d is greater \n",max);
}
