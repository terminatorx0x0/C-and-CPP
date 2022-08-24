#include <conio.h>
#include<stdio.h>
void main()
{
int a;
printf("enter the percentage:");
scanf("%d",&a);
if (a<=32)
{printf("the grade is:D \n");}
if ((a<=49)&&(a>=33))
{printf("the grade is:C \n");}
if ((a<=74)&&(a>=50))
{printf("the grade is:B \n");}    
if ((a<=100)&&(a>=75))
{printf("the grade is:A \n");}
}