#include<conio.h>
#include<stdio.h>
void main()
{ int i,j;
for (i=5;i>=1;i--)
{
    for(j=i;j<=5;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}
}
/* mirror image
#include<conio.h>
#include<stdio.h>
void main()
{ int i,j,k;
for (i=5;i>=1;i--)
{
    for(k=0;k<i;k++)
    printf(" ");
    for(j=i;j<=5;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}
}
*/