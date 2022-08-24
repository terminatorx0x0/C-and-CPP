#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter the num of row:" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int k = 5; k > i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}