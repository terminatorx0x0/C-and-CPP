#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,flag,l,f;
  printf("enter the value of first nd last num:\n");
  scanf("%d%d",&f,&l);
  for(i=f;i<=l;i++)
{
    if (i==0||i==1)
     continue;
     flag=1;
    for(j=2;j<=i/2;j++)
    {
        if (i%j==0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("%d  ",i);
    }
}    
}
/*to find next prime==
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,flag,f;
    printf("enter the number\n");
    scanf("%d",&f);
    for(i=f;;i++)
    {
        if (i==1||i==0)
            continue;
            flag=1;
        for(j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            printf("%d\n",i);
            break;
        }
    }
}
*/  