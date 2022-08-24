#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
    int n;
    printf("enter the value \n");
    scanf("%d",&n);
    fib(n);
    
}
int fib(int n)
{
    int i,a=-1,b=1,c;
    for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}