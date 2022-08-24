#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a=-1,b=1,c;
    printf("enter the value \n");
    scanf("%d",&n);
    while (c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    {
        printf("term of fib series");
    }
    else
    {
        printf("not a term of fib series");
    }
}