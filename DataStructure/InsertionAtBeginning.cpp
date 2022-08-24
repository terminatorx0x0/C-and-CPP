#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a[6] = {1, 2, 5, 6, 4};
    int i, n;

    cout << "enter the element you want to insert at beginning:" << end;
    cin << n;
    for (i = a.length; i > 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = n;
    for (i = 0; i < a.length; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
