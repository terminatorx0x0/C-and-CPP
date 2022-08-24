#include <iostream>
using namespace std;
int main()
{
    int i, j, n, m;
    cout << "enter the number:";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            m = 0;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    m++;
                    break;
                }
            }
            if (m == 0)
            {
                cout << i << endl;
            }
        }
    }
}