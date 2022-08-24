#include<stdio.h>
#include<conio.h>
int gre(int,int);
void main()
{
    int a,b;
    printf("enter the value of A,B \n");
    scanf("%d%d",&a,&b);
    gre(a,b);
}
int gre(int a,int b)
{
    if(a>b)
    {
        printf("A is greater=%d",a);
    }
    else
    {
        printf("B is greater=%d",b);
    }
}
/*
#include<stdio.h>
#include<conio.h>
int gre(int,int,int);
void main()
{
    int a,b,c,d;
    printf("enter the value of A,B,C \n");
    scanf("%d%d%d",&a,&b,&c);
    d=gre(a,b,c);
    printf("biggest num is %d",d);
}
int gre(int a,int b,int c)
{
    if((a>b)&&(a>c))
    {
        return(a);
    }
    else if(b>c)
    {
    return(b);
    }
    else
    {
        return(c);
    }
}