#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int n, arr[100], key;
    cout << "enter the number of input" << endl;
    cin >> n;
    cout << "enter the values:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key:" << endl;
    cin >> key;
    cout << linearsearch(arr, n, key) << endl;
    return 0;
}