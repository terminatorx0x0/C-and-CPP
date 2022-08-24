#include<stdio.h>
#include<conio.h>
void main()
{
int dow;
float a,b,re;
    printf("enter the number for  various operation \n 1-sum\n 2-diff\n 3-product\n 4-divide\n ");
    scanf("%d",&dow);
    printf("enter the  1st number: ");
    scanf("%f",&a);
    printf("enter the  2nd number: ");
    scanf("%f",&b);
    switch(dow)
{
    case 1:
    re=a+b;
    printf("the sum is %f \n",re);
    break;
    case 2:
    re=a-b;
    printf("the diff is %f \n",re);
    break;
    case 3:
    re=a*b;
    printf("the product is %f\n",re);
    break;
    case 4:
    re=a/b;
    printf("the quotient is %f\n",re);
    break;
    
}   
}