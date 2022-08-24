#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter the number of row:" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}