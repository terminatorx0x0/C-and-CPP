#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20], ch;
    do
    {
        int i, x, m = 0, n = 0;
        cout << "enter the string:" << endl;
        cin >> s;
        x = strlen(s);
        for (i = 0; i < x; i++)
        {
            if (s[i] == 'a' || s[i] == 'b')
                cout << "";
            else
            {
                cout << "WRONG INPUT!!" << endl
                     << "PLZ ENTER AGAIN!!" << endl;
                cin >> s;
                x = strlen(s);
                i = 0;
            }
        }
        for (i = 0; i < x; i++)
        {
            if (s[i] == 'a')
            {
                m++;
            }
            else
            {
                n++;
            }
        }
        if (m % 3 == 0 || n % 3 == 0)
        {
            cout << "Valid String!!";
        }
        else
        {
            cout << "Invalid String";
        }
        cout << endl
             << "Want to check another?? y/Y" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}