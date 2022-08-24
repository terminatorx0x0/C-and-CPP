#include<stdio.h>
#include<conio.h>
int swap(int,int);
void main()
{
    int a,b;
    printf("enter the value of A,B: \n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    
}
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
        printf("After swapping the value of A and B are %d and %d",a,b);
    }
}