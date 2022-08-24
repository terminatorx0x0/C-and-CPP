#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=0,b=1,c;
printf("enter the num:");
scanf("%d",&n);
for (i=1; i <=n; i++)                                                                   
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}
}

/*#include<stdio.h>
#include<conio.h>
void main()
{ int i,n,a=0,b=1,c;
printf("enter the num:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{printf("%d \n",a);
c=a+b;
a=b;
b=c;
}
} */
/*
#include<conio.h>
#include<stdio.h>
void main()
{
    int i=1,n,a=0,b=1,c;
    printf("enter the value:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf(" %d \n",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}
*/