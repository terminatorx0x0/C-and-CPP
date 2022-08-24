#include<conio.h>
#include<stdio.h>
void main()
{ int i,j;
for (i=5;i>=1;i--)
{
    for(j=i;j>=1;j--)
    {
        printf("%d",i);
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
    for(k=5;k>i;k--)
    printf(" ");
    for(j=i;j>=1;j--)
    {
        printf("%d",i);
    }
    printf("\n");
}
}
*/