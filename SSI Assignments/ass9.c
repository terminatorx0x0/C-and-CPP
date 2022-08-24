#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 printf("enter the value:");
 scanf("%c",&ch);
 if ((ch>='A')&&(ch<='Z'))
 {
    printf("upper case \n");
 }
 else
 if ((ch>='a')&&(ch<='z'))

 {
  printf("lower case \n");
}
else
if ((ch>='0')&&(ch<='9'))
{
printf("digit \n");
}
else
{
    if(ch)
    printf("other \n");
}
}
