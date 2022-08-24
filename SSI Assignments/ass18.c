#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
printf("enter the num:");
scanf("%d",&num);
for (i=1; i <=num; i++)
sum=sum+i;           
printf("%d",sum);
}



/*  #include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
printf("enter the num:");
scanf("%d",&num);
for (i=num; i >=1; i--)
sum=sum+i;           
printf("%d",sum);
}*/
/*  #include<conio.h>
#include<stdio.h>
void main()
{
    int i=1,sum=0,num;
    printf("enter the num");
    scanf("%d",&num);
    while (i<=num)
    {
   
    sum=sum+i;
     i++;
    }
    printf("%d",sum);
} */