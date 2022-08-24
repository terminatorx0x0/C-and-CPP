#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],b[3][3],i,j,sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
    printf("enter the value for matrix A: \n");
    scanf("%d",&a[i][j]);
  }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
    printf("enter the value for matrix B: \n");
    scanf("%d",&b[i][j]);
  }
  }
  for(i=0;i<3;i++)
  { 
    for(j=0;j<3;j++)
{
  sum=a[i][j]+b[i][j];
  printf("%d\t",sum);
}
printf("\n");
}
}