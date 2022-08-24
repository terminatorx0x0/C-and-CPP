#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int dow;
float a,b,c,s,ar;
    printf("enter the number for finding various areas of quadilaterals\n 1-square\n 2-circle\n 3-rectangle\n 4-triangle\n ");
    scanf("%d",&dow);
    switch(dow)
{
    case 1:
    printf("enter the length of side:");
    scanf("%f",&a);
    ar=pow(a,2);
    printf(" %f \n",ar);
    break;
    case 3:
    printf("enter the length of side:");
    scanf("%f",&a);
    printf("enter the breadth of side:");
    scanf("%f",&b);
    ar=a*b;
    printf("%f \n",ar);
    break;
    case 2:
    printf("enter the radius of circle:");
    scanf("%f",&a);
    ar=(pow(a,2)*(22/7));
    printf(" %f\n",ar);
    break;
    case 4:
    printf("enter the length of side:");
    scanf("%f",&a);
    printf("enter the length of side:");
    scanf("%f",&b);
    printf("enter the length of side:");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt((s-a)*(s-b)*(s-c));
    printf(" %f\n",ar);
    break;
    
}   
}