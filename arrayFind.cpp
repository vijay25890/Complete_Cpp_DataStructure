#include <iostream>

using namespace std;

int main()
{
    int n, i, key;
    cout << "enter num";
    cin >> n;
    cout << "enter key";
    cin >> key;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << "Number found at" << i
                 << " "
                 << "and num is " << arr[i];
        }
    }
    return 0;
}