#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20];
    int i, x;
    cout << "Enter The Binary Number:" << endl;
    cin >> s;
    x = strlen(s);
    for (i = 0; i < x; i++)
    {
        if (s[i] == '0' || s[i] == '1')
            cout << "";
        else
        {
            cout << "Inappropriate String!!Plz Enter Again.." << endl;
            cin >> s;
            x = strlen(s);
            i = 0;
        }
    }
    for (i = 0; i < x; i++)
    {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
    cout << "The 1's complement of given number is:" << s << endl;
    for (i = 0; i < x; i++)
    {
        if (s[x - 1] == '0')
        {
            s[x - 1] = '1';
            break;
        }
        else if (s[(x - 1) - i] == '1')
        {
            s[(x - 1) - i] = '0';
            continue;
            if (s[(x - 2) - i] == '0')
            {
                s[(x - 2) - i] = '1';
                break;
            }
        }
    }
    cout << s;
}