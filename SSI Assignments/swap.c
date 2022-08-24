/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("enter the value of A,B\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping \na=%d\nb=%d ",a,b);
}
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the value:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping \na=%d\nb=%d ",a,b);
}