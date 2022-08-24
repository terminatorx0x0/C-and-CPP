#include<stdio.h>
#include<conio.h>
void main()
{
int i,x,re=1;
printf("enter the value of x:");
scanf("%d",&x);
for (i=1; i <=x; i++)                                                                   
{
re=re*i;
}
printf("the result is %d",re);
}

/* #include<conio.h>
#include<stdio.h>
void main()
{ int i,re=1,x;
printf("enter the number:");
scanf("%d",&x);
for ( i = x; i >=1; i--)
{re=re*i;}
printf("the result is %d",re);
} */

/*#include<conio.h>
#include<stdio.h>
void main()
{
    int i=1,x,re=1;
    printf("enter the num:");
    scanf("%d",&x);
    while(i<=x)
    {
        re=re*i;
        i++;
    }
    printf("the result is %d",re);
} */