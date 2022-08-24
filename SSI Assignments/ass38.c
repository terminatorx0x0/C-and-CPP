#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,num,m=1;
    printf("enter the number: \n");
    scanf("%d",&num);
    for(n=2;n<num;n++)
    {
        m=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
    {
    m=0;
    break;
    }
    }
    if (m)
    {
        printf("%d \n",n);
    }
    }
    printf("program over:) \n");
} 
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,num;
    printf("enter the number: \n");
    scanf("%d",&num);
    for(n=2;n<=num;n++)
    {
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
    {
        break;
    }
    }
    if (i==n)
    {
        printf("%d \n",n);
    }
    }
    printf("program over:) \n");
} 
*/