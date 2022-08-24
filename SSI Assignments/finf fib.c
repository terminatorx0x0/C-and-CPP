#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a=-1,b=1,c,x=0;
    printf("enter the value \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        x++;
    }
    if(x==0)
    {
        printf("not a term of fib series");
    }
    else
    {
        printf("term of fib series");
    }
}