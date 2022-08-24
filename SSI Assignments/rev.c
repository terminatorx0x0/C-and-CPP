#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,r,sum=0;
    printf("enter the value:\n");
    scanf("%d",&n);
    while (n>0)
    {
r=n%10;           /* r=6,5,4
                   s=6,65,654   
                   n=45,4,0 */
sum=sum*10+r;      
n=n/10;
    printf("%d\n%d\n%d\n",r,sum,n);
}
}