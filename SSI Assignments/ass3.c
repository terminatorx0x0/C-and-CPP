#include<stdio.h>
#include<conio.h>
void main()
{
 char a,b;
 printf("enter the character:");
 scanf("%c",&a);
 if((a=='z')|(a=='Z'))
 {
     a=a-25;
     printf("the next char is %c",a);
 }
 else
 {
     a=a+1;
     printf("the next char is %c",a);
 }
 }