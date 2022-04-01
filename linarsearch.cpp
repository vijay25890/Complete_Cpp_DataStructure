// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return key, arr[i];
//         }
//     }
// }

// int main()
// {
//     int n, key;
//     cout << "Enter the number :" << endl;
//     cin >> n;
//     cout << "Enter the key :" << endl;
//     cin >> key;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << linearSearch(arr, n, key);
// }

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key);
int main()
{
    int n, key;
    cout << "Enter the array size " << endl;
    cin >> n;
    cout << "Enter the key " << endl;
    cin >> key;
    int arr[n];
    cout << "Enter the array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << linearSearch(arr, n, key);
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}