#include <conio.h>
#include<stdio.h>
void main()
{
float a,b,re;
char op;
printf("insert the operation \n");
scanf("%c",&op);
if((op=='+')||(op=='-')||(op=='*')||(op=='/'))
{
printf("enter the number");
scanf("%f",&a);
printf("enter the number");
scanf("%f",&b);
if(op=='+')
re=a+b;
else if(op=='-')
re=a-b;
else if(op=='*')
re=a*b;
else if(op=='/')
re=a/b;
printf("the result is %f \n",re);
}
else
printf("wrong operator \n");
}

/*
if(op=='1')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a+b;
    printf("the sum is  %f \n",re);
}
if(op=='2')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a-b;
    printf("the diff is  %f \n",re);
}
if(op=='3')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a*b;
    printf("the product is  %f \n",re);
}    
if(op=='4')
{
    printf("enter the number:");
    scanf("%f",&a);
    printf("enter the number:");
    scanf("%f",&b);
    re=a/b;
    printf("the quotient is  %f \n",re);
}
*/
    