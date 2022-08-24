#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20], ch;
    do
    {
        int i, x;
        cout << "Enter the String:" << endl;
        cin >> s;
        x = strlen(s);
        for (i = 0; i < x; i++)
        {
            if (s[i] == 'a' || s[i] == 'b')
            {
                cout << "";
            }
            else
            {
                cout << "Inappropriate string!!" << endl
                     << "Plz enter again" << endl;
                cin >> s;
                x = strlen(s);
                i = 0;
            }
        }
        if (s[x - 2] == 'a')
        {
            cout << "valid string!!";
        }
        else
        {
            cout << "Invalid string!!";
        }
        cout << endl
             << "want to check another string??y/Y" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}