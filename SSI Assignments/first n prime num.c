#include<stdio.h>
#include<conio.h>
void main()
{
    int i=2,j,n,flag,p=1;
    printf("enter the value of N\n");
    scanf("%d",&n);
    while(p<=n)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d  ",i);
            p++;
        }
        i++;
    }
}