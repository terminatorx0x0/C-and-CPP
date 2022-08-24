#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char name[20],i;
  int len;
  printf("enter the name:");
  gets(name);
  len= strlen(name);
  for( i=len-1;i>=0;i--)
  {
    printf("%c",name[i]);
  }
}