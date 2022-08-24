#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20], ch;
    do
    {
        int m;
        cout << "enter the decimal num:" << endl;
        cin >> m;
        if (m % 2 == 0)
        {
            cout << "Divisible!!";
        }
        else
        {
            cout << "Not Divisible!!";
        }
        cout << "Want to check another?? y/Y" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}