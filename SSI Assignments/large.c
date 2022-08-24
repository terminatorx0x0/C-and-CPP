#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;
    printf("enter the first number:");
    scanf("%f",&a);
    printf("enter the second number:");
    scanf("%f",&b);
    if(a>b)
    printf("the larger number is %f",a);
    else
    {
        printf("the larger number is %f",b);
    }
}