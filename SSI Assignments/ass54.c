#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,j,x=0,sum=0;
  printf("enter the value: \n");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    for(j=2;j<=i;j++)
    {
    if (i%j==0)
    {
    x++;
    break;
    }
    if(x==0)
    {
      sum=sum+i;
    }
    }
    printf("sum=%d",sum);
  }
}