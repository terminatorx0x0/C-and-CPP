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
  for(i=0;i<3;i++)
  { 
    for(j=0;j<3;j++)
{
  printf("%d\t",a[j][i]);
}
printf("\n");
}
}