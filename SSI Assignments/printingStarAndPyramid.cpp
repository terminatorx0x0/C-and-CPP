#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //mirror
    for (i = 1; i <= 4; i++)
    {
        for (k = 0; k <= i; k++)
        {
            cout << " ";
        }
        for (j = 4; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //upside down
    for (i = 1; i <= 4; i++)
    {
        for (k = 4; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //upside down pyramid of star
    for (i = 1; i <= 7; i = i + 2)
    {
        for (k = 1; k <= i; k = k + 2)
        {
            cout << " ";
        }
        for (j = i; j <= 7; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //pyramid at its orginal shape
    for (i = 1; i <= 7; i = i + 2)
    {
        for (k = 7; k >= i; k = k - 2)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //printing number
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //pyramid of star
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //printing the pyramid of pallindrome
    for (i = 1; i <= 4; i++)
    {
        for (int l = 4; l >= i; l--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------------" << endl;
    //pyramid of pallindrome of alphabets
    for (i = 68; i >= 65; i--)
    {
        for (k = 65; k <= i; k++)
        {
            cout << (char)k;
        }
        for (int l = i; l < 68; l++)
        {
            cout << "  ";
        }
        for (j = i; j >= 65; j--)
        {
            cout << (char)j;
        }
        cout << endl;
    }
}