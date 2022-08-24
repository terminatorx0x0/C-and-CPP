#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,flag,a;
  printf("enter the value\n");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
{
    if (i==0||i==1)
     continue;
     flag=1;
    for(j=2;j<=i/2;j++)
    {
        if (i%j==0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
    if (a%i==0)
    {
        printf("%d\n",i);
    }
    
    }
}    
}