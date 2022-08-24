#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b,c,d,e,p;
 printf("enter the marks of given subject:\n1.maths\n2.science\n3.sst\n4.English\n5.computer\n");
 scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
 p=(a+b+c+d+e)/5;
 if(p>33)
 {
     printf("pass\n Congratulation!\n");
 }
 else
 {
     printf("fail\n Better luck next time\n");
 }
 printf("percent=%f",p);
}