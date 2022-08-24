#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],i,j,sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
    printf("enter the number");
    scanf("%d",&a[i][j]);
  }
  }
   printf("%d,%d,%d",a[0][2],a[1][1],a[2][0]);
}