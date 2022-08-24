#include<stdio.h>
#include<conio.h>
void main()
{
  char name[20],i,length=0;
  printf("enter the name:");
  gets(name);
  for( i=0;i<=name[i];i++)
  {
    length++;
  }
  printf("%d",length);
}