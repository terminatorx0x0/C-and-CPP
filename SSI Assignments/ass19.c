#include<stdio.h>
#include<conio.h>
void main()
{
int i,mul=0,num;
printf("enter the num:");
scanf("%d",&num);
for (i=1; i <=10; i++)
{mul=num*i;
printf("%d*%d=%d \n",num,i,mul);
}
}

  /* #include<stdio.h>
#include<conio.h>
void main()
{
int i,mul=0,num;
printf("enter the num:");
scanf("%d",&num);
for (i=10; i >=1; i--)
{mul=num*i;
printf("%d*%d=%d \n",num,i,mul);
}
} */
/*
 #include<conio.h>
#include<stdio.h>
void main()
{
     int i=1,num,mul=0;
     printf("enter the num: ");
     scanf("%d",&num);
     while (i<=10)
     {

     mul=num*i;
     printf("%d*%d=%d \n",num,i,mul);
     i++;
     }
}*/