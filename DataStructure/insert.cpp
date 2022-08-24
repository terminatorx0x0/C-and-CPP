#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i, j, n[100], a, pos, b;
    cout << "enter the number of values u want to enter:" << endl;
    cin >> a;
    cout << "enter the values:" << endl;
    for (i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    cout << "enter the position at which u want to insert new value:" << endl;
    cin >> pos;
    for (j = a; j >= pos; j--)
    {
        n[j] = n[j - 1];
    }
    cout << "enter the value u want to insert:" << endl;
    cin >> b;
    n[pos - 1] = b;
    for (i = 0; i <= a; i++)
    {
        cout << n[i];
    }
}