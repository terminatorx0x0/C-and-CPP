#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,max;
    printf("enter the two number:\n");
    scanf("%d%d",&a,&b);
    max=(a>b?a:b);
    while(1)
    {
    if (max%a==0&&max%b==0) 
    {
        printf("the lcm of given num is=%d",max);
        break;
    }
    max++;
}
}