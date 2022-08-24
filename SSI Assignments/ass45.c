#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],i,j,max=0,min=32764;
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
  if(max<a[i][j])
  {max=a[i][j];}
  if(min>a[i][j])
  {min=a[i][j];}
}
}
printf("max=%d, min=%d",max,min);
}