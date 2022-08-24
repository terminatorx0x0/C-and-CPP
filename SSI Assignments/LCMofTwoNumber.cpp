#include <iostream>
using namespace std;
int main()
{
    char ch;
    int a, b, i, max;
    do
    {
        cout << "enter the two number:";
        cin >> a >> b;
        max = (a > b ? a : b);
        while (1)
        {
            if (max % b == 0 && max % a == 0)
            {
                cout << max;
                break;
            }
            max++;
        }
        cout << endl
             << "want to check another??y/Y";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}