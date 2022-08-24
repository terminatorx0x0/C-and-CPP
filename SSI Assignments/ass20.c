#include<stdio.h>
#include<conio.h>
void main()
{
int i,x,y,re=1;
printf("enter the value of x");
scanf("%d",&x);
printf("enter the value of y");
scanf("%d",&y);
for (i=1; i <=y; i++)                                                                   
{
re=re*x;
}
printf("the result is %d",re);
}

/* #include<conio.h>
#include<stdio.h>
void main()
{ int i,x,y,re=1; 
 printf("enter the value of x:");
 scanf("%d",&x);
 printf("enter the value of y:");
 scanf("%d",&y);
 for(i=y;i>=1;i--)
 re=re*x;
 printf("the result is %d",re);
} */
/*
#include<conio.h>
#include<stdio.h>
void main()
{
    int i=1,x,y,re=1;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);
    while(i<=y)
    {
        re=re*x;
        i++;
    }
    printf("%d",re);
} */