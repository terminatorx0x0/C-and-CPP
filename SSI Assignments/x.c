#include<stdio.h>
#include<conio.h>
int gre(int,int);
void main()
{
    int a,b;
    printf("enter the value of A,B \n");
    scanf("%d %d",&a,&b);
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