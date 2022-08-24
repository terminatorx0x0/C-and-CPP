#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    printf("enter the first number:");
    scanf("%f",&a);
    printf("enter the second number:");
    scanf("%f",&b);
    printf("enter the third number:");
    scanf("%f",&c);
    if(a>b)
    {
    if(a>c)
    {
        printf("the larger number is %f",a);
    }
    else
    {
        printf("the larger number is %f",c);
    }
    }

    else
    {
        printf("the larger number is %f",b);
    }
    
}