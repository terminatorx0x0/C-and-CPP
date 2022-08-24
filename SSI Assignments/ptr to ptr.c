#include<stdio.h>
#include<conio.h>
void main()
{
    int **ptr1,*ptr,a=10;
    ptr=&a;
    ptr1=&ptr;
    printf("value of a %d\n",a);
    printf("adress of a %u\n",&a);
     printf("value of ptr %d\n",*ptr);
    printf("adress of ptr %u\n",&ptr);
     printf("value of ptr1 %d\n",**ptr1);
    printf("adress of ptr1 %u\n",&ptr1);
}