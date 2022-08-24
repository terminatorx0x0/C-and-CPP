#include<conio.h>
#include<stdio.h>
void main()
{
    FILE *a;
    char ch;
    a=fopen("file.txt","ws");
    while (1)
    {
    ch=getche();
    if(ch=='r')
    break
    fputc(ch,a);
    }
    fclose(a);
}
