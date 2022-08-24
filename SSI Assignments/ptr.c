#include<stdio.h>
#include<conio.h>
void main()
{
    int *ptr,*ptr1,a=10,b=20;
    ptr=&a;
    ptr1=&b;
    printf("value of a %d\n",a);
    printf("adress of a %u\n",&a);
     printf("value of b %d\n",b);
    printf("adress of b %u\n",&b);
     printf("value of ptr %d\n",*ptr);
    printf("adress of ptr %u\n",&ptr);
     printf("value of ptr1 %d\n",*ptr1);
    printf("adress of ptr1 %u\n",&ptr1);
}