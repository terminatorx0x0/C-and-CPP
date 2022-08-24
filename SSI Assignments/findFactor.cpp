#include <iostream>
using namespace std;
int main()
{
    int i, n, m;
    cout << "enter the number";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}