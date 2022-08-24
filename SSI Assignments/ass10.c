#include <conio.h>
#include<stdio.h>
void main()
{
float a,b,re;
char op;
printf("insert the operation \n");
scanf("%c",&op);
if(op=='+')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a+b;
    printf("the sum is  %f \n",re);
}
if(op=='-')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a-b;
    printf("the diff is  %f \n",re);
}
if(op=='*')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a*b;
    printf("the product is  %f \n",re);
}    
if(op=='/')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a/b;
    printf("the quotient is  %f \n",re);
}
}    