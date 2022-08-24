/*#include<conio.h>
#include<stdio.h>
void main()
{
    int month;
    printf("enter the number of month:\n");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
        printf("31 Days");
        break;
        case 2:
        printf("28 Days");
        break;
        case 3:
        printf("31 Days");
        break;
        case 4:
        printf("30 Days");
        break;
        case 5:
        printf("31 Days");
        break;
        case 6:
        printf("30 Days");
        break;
        case 7:
        printf("31 Days");
        break;
        case 8:
        printf("31 Days");
        break;
        case 9:
        printf("30 Days");
        break;
        case 10:
        printf("31 Days");
        break;
        case 11:
        printf("30 Days");
        break;
        case 12:
        printf("31 Days");
        break;
        default:
        printf("wrong input");   
        break;
    }
}
#include<conio.h>
#include<stdio.h>
void main()
{
    int cal;
    float a,b,c;
    printf("enter the operator:\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Exit\n");
    scanf("%d",&cal);
    
    switch (cal)
    {
        case 1:
        printf("enter the value of A,B:\n");
        scanf("%f%f",&a,&b);
        c=a+b;
        printf("%f",c);
        break;
        case 2:
        printf("enter the value of A,B:\n");
        scanf("%f%f",&a,&b);
        c=a-b;
         printf("%f",c);
        break;
        case 3:
        printf("enter the value of A,B:\n");
        scanf("%f%f",&a,&b);
        c=a*b;
         printf("%f",c);
        break;
        case 4:
        printf("enter the value of A,B:\n");
        scanf("%f%f",&a,&b);
        c=a/b;
         printf("%f",c);
        break;
    }
}*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int tri,a,b,c;
    printf("enter the value for checking:\n1-Isosceles Triangle\n2-right angled Triangle\n3-Equilateral Triangle\n");
    scanf("%d",&tri);
    switch (tri)
    {
        case 1:
        printf("enter the value of A,B,C:\n");
        scanf("%d%d%d",&a,&b,&c);
        if (a==b||b==c||c==a)
        {
            printf("yes,it is isosceles triangle");
        }
        else
        printf("not a isosceles triangle");
        break;
        case 2:
        printf("enter the value of A,B,C:\n");
        scanf("%d%d%d",&a,&b,&c);
        if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
        {
            printf("yes,it is right angled triangle");
        }
        else
        printf("not a right angled triangle");
        break;
        case 3:
        printf("enter the value of A,B,C:\n");
        scanf("%d%d%d",&a,&b,&c);
        if (a==b&&b==c&&c==a)
        {
            printf("yes,it is equilateral triangle ");
        }
        else
        printf("not a equilateral triangle");
        break;
    }
}