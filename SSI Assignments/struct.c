#include<stdio.h>
#include<conio.h>
struct emp
{
    char name[20];
    char add[20];
    char cont[10];
    int sal;
    float comm;
}b[2];
void main()
{
    int i;
printf("enter the name of employee,address,contact no.,salary,commision\n");
for(i=0;i<=2;i++)
{scanf("%s%s%s%d%f",b[i].name,b[i].add,b[i].cont,&b[i].sal,&b[i].comm);}
printf("the record of employee are:\n");
for(i=0;i<=2;i++)
{printf("Name is=%s\naddress is=%s\ncontact num is=%s\nsalary is=%d\ncommision is=%f\n",b[i].name,b[i].add,b[i].cont,b[i].sal,b[i].comm);
}
}