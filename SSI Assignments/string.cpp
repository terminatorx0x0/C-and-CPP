#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20], ch;
    do
    {
        int i, j, k, n = 0, m = 0;
        cout << "enter the string:";
        cin >> s;
        j = strlen(s);
        for (i = 0; i < j; i++)
        {
            if (s[i] == 'a' || s[i] == 'b')
            {
                cout << " ";
            }
            else
            {
                cout << "wrong input!!";
                cout << endl
                     << "enter again:";
                cin >> s;
                j = strlen(s);
                i = 0;
            }
        }
        for (k = 0; k < j; k++)
        {
            if (s[k] == 'a')
            {
                m++;
            }
            else
            {
                n++;
            }
        }
        if (m > 1 && n > 1)
        {
            cout << "valid string!!";
        }
        else
        {
            cout << "invalid string!!";
        }
        cout << endl
             << "want to check another string?? y/Y";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}