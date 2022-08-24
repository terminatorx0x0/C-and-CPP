#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20], ch;
    do
    {
        int i, x, m = 0, n = 0, o = 0;
        cout << "enter the string" << endl;
        cin >> s;
        x = strlen(s);
        for (i = 0; i < x; i++)
        {
            if (s[0] == 'a' && s[x - 1] == 'c' || s[i + 1] == 'b' && x % 3 == 0)
                cout << "";
            else
            {
                cout << "inappropriate string!!" << endl
                     << "plz enter again!!" << endl;
                cin >> s;
                x = strlen(s);
                i = 0;
            }
        }
        for (i = 0; i < x; i++)
        {
            if (s[i] == 'a')
                m++;
            else if (s[i] == 'b')
                n++;
            else
                o++;
        }
        if (m == n && n == o)
            cout << "Valid string!!";
        else
            cout << "Invalid string!!";
        cout << "want to check another string??y/Y";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}