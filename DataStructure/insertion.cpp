#include <iostream>
using namespace std;
int main()
{
    int s[100], pos, n, i, j;
    cout << "enter the number of values u want to enter:\n";
    cin >> n;
    cout << "enter " << n << " values \n";
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout << "enter the position where u want to insert the values:\n ";
    cin >> pos;
    cout << "enter the array:\n";
    cin >> j;
    for (i = n - 1; i >= pos - 1; i--)
        s[i + 1] = s[i];
    s[pos - 1] = j;
    cout << "new array is:\n";
    for (i = 0; i <= n; i++)
    {
        cout << s[i] << endl;
    }
}