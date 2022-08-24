#include<stdio.h>
#include<conio.h>
float area(int);
void main()
{
    int r;
    float a;
    printf("enter the value of r \n");
    scanf("%d",&r);
    a=area(r);
    printf("area=%f",a);
    getch();
}
float area(int r)
{
    return(3.14*r*r);
}