#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
printf("enter the number:");
scanf("%d",&a);
/*if(!a)
printf("%d is xero",a);
else
{
    printf("%d is non zero",a);
}*/
if (a)
{
    printf("%d is non zero\n",a);
}
else
{
    printf("%d is zero \n",a);
}


}