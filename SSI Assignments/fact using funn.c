#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    fact(n);
    
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
      f=f*i;
    }
        printf("fact=%d",f);
}