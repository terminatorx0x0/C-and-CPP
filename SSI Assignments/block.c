#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b,c,t;
 float per;
 printf("enter the math marks:");
 scanf("%d",&a);
printf("enter the eng marks:");
 scanf("%d",&b);
 printf("enter the sci marks:");
 scanf("%d",&c);
 t=a+b+c;
 per=t/3;
 printf("the total marks is %d \n",t);
 printf("the percentage is %f \n",per);
 if(per>=33)
 {
     printf("pass \n");
     printf("congrats \n");
 } 
else
{
    printf("fail \n");
    printf("sorry \n");
}

}