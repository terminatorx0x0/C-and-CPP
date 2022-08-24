/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
} 
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(k=1;k<i;k++)
        printf(" ");
        for(j=4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(k=4;k>i;k--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
 #include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    { 
        for(k=0;k<15-i;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf(" *");
         printf("\n");
    }
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
 #include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=0;i--)
    { 
        for(k=i;k<5;k++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("*");
         printf("\n");
    }
}
 #include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=0;i<=5;i++)
    { 
        for(k=5;k>i;k--)
        printf(" ");
        for(j=1;j<=2*i+1;j++)
        printf("*");
         printf("\n");
    }
}*/
 #include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    { 
        for(k=i;k<4;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",j);
        for(j=i-1;j>=1;j--)
        printf("%d",j);
         printf("\n");
    }
}