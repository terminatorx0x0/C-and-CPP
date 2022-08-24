#include<conio.h>
#include<stdio.h>
int area (int);
void main()
{
    int r,a;
printf("enter the value");
scanf("%d",&r);
a=area(r);
printf("area=%d",a);
}
int area(int x)
{
    return(3.14*x*x);
 }