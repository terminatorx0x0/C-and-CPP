 #include<iostream>
#include<conio.h>
using namespace std;
class Array
{
    public:int i,j,a[3][3],b=0;
    void input()
    {
    cout<<"enter the value:"<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        cin>>a[i][j];
    }
    }
    void show()
    {
        for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
        {
            b=b+a[i][j];
        }
        }
        cout<<"the sum is="<<b;
    }
   
};
main()
{
Array a;
a.input();
a.show();
}