#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,HCF,i;
    printf("enter the two number:\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if (a%i==0 && b%i==0)
        {
            HCF=i;
        }
    }
        if (HCF==1)
        {
            printf("co-prime");
        }
        else
        {
            printf("not co-prime");
        }
}