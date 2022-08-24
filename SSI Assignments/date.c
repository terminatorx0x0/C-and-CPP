#include<stdio.h>
#include<conio.h>
struct date
{
    int day,mon,year;
}b;
void main()
{
printf("enter day,month,year");
scanf("%d%d%d",&b.day,&b.mon,&b.year);
printf("the Date are:%d-%d-%d",b.day,b.mon,b.year);
}