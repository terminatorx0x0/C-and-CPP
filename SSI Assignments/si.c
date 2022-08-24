#include <stdio.h>
#include <conio.h>
float main()
{
int p,r,t,si,amt;

printf("enter the principal value ");
scanf("%d",&p);
printf("enter the rate value ");
scanf("%d",&r);
printf("enter the time value ");
scanf("%d",&t);
si=(p*r*t)/100;
printf("the simple interest of of given value is %d ",si);
amt=p+si;
printf("the amount to be paid back is %d ",amt);
return 0;
}
