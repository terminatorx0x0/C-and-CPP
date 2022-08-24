#include <iostream>
#include <string.h>
using namespace std;
int main()
{ //we can use turing machine here
    char s[20], ch;
    do
    {
        int x, i, j, m = 0, n = 0, o = 0;
        cout << "Enter the String:" << endl;
        cin >> s;
        x = strlen(s);
        for (i = 0; i < x; i++)
        {
            if (s[0] == 'a' && s[x - 1] == 'c' || s[i + 1] == 'b')
                cout << " ";
            else
            {
                cout << "Inappropriate String!!" << endl
                     << "Plz Enter appropriate string!!" << endl;
                cin >> s;
                x = strlen(s);
                i = 0;
            }
        }
        for (j = 0; j < x; j++)
        {
            if (s[j] == 'a')
            {
                m++;
            }
            else if (s[j] == 'b')
            {
                n++;
            }
            else
            {
                o++;
            }
        }
        if (m == n && n == o && o >= 1)
        {
            cout << "Valid String!!";
        }
        else
        {
            cout << "Invalid String!!";
        }

        cout << endl
             << "want to check another string??y/Y" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}