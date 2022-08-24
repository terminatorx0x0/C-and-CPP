#include<stdio.h>
#include<conio.h>
void main()
{
    int i,m=1,num;
    printf("enter the number: \n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
    if((num%i)==0)
    {
        m=0;
    }
    }
    if (m==1)
    {
    printf("%d is a prime number \n",num);
    }
    else
    {
        printf("%d is composite number \n",num);
    }
    printf("program over:) \n");
} 
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num;
    printf("enter the number: \n");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
    if(num%i==0)
    {
    printf("%d is a composite
     number \n",num);
    goto end;
    }
    }
    printf("%d is a prime number \n",num);
    end:
    printf("program over:) \n");
} */