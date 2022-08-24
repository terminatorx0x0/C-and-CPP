#include<stdio.h>
#include<conio.h>
void main()
{
int a;                    /* implicit conversion */
float f=8.5;
a=f;
printf("%d",a);

}

/*{
int a=2;
float f;                         /* implicit conversion */
f=a;
printf("%f",f);
}*/


/*{
printf("%f",5/2);
}/*


/*{
  char ch;
  printf("enter the character");           /* explicit type casting */                                                                                                                                                                                                                                                                                                                                                                             
  scanf("%c",&ch);
  printf("%d",(int)ch);
}/*


/*{
  int a;
  printf("enter the number ");
  scanf("%d",&a);
  printf("%c",(char)a);
}*/