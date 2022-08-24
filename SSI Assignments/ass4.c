#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 printf("enter the character:");
 scanf("%c",&ch);
 if ((ch>='a')&&(ch<='z'))
{
    ch=ch-32;
    printf("%c \n",ch);
}
}