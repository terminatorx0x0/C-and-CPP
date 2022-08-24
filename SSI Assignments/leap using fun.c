#include<stdio.h>
#include<conio.h>
int year(int);
void main()
{
    int a;
    printf("enter the Year \n");
    scanf("%d",&a);
    year(a);
}
int year(int a)
{
    if(a%4==0)
    {
        printf("A is leap year=%d",a);
    }
    else
    {
        printf(" A is not a leap year=%d",a);
    }
}