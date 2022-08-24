#include<stdio.h>
#include<conio.h>
int eve(int);
void main()
{
    int a;
    printf("enter the value of A \n");
    scanf("%d",&a);
    eve(a);
}
int eve(int a)
{
    if(a%2==0)
    {
        printf("A is even=%d",a);
    }
    else
    {
        printf(" A is Odd=%d",a);
    }
}