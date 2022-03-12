#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout << str;
    char arr[20];
    // for (int i = 0; i < 20; i++)
    // {
    //     cin.get(arr, 20);
    // }
    // for (int i = 0; i < 20; i++)
    // {
    //     // cin.get(arr, 20);
    //     cout << arr[i];
    // }
    cin.get(arr, 20);
    cout << arr;
    return 0;
}