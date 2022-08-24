#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20], ch;
    do
    {
        int i, j, x, m = 0, n = 0;
        cout << "Enter the Binary Number:" << endl;
        cin >> s;
        x = strlen(s);
        for (i = 0; i < x; i++)
        {
            if (s[i] == '1' || s[i] == '0')
                cout << " ";
            else
            {
                cout << "Inappropriate String!! Plz Enter Again!!" << endl;
                cin >> s;
                x = strlen(s);
                i = 0;
            }
        }
        for (j = 0; j < x; j++)
        {
            if (s[j] == '0')
                m++;
            else
                n++;
        }
        if (m == n)
            cout << "Valid String!!";
        else
            cout << "Invalid String!!";
        cout << endl
             << "want to check another??y/Y";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}