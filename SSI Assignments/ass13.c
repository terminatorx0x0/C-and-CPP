#include <conio.h>
#include<stdio.h>
void main()
{
int a;
printf("enter the sales:");
scanf("%d",&a);
if (a<=5000)
{printf("the commision is:0 percent \n");}
else if ((a<=12000)&&(a>=5001))
{printf("the commision is:3 percent \n");}
else if ((a<=21000)&&(a>=12001))
{printf("the commision  is:7 percent \n");}    
else if ((a<=30000)&&(a>=21001))
{printf("the commision is:10 percent \n");}
else
printf("the commision is:15 percent \n");
}