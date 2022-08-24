 #include<conio.h>
#include<stdio.h>
#define MAX 5
void main()
{
    int i,a[MAX],sum=0;
    for(i=0;i<MAX;i++)
{
    printf("enter the value: \n");
    scanf("%d \n",&a[i]);
}
for(i=0;i<MAX;i++)
{
sum+=a[i];
}
    printf("%d",sum); 
}