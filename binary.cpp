#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int mid, int key)
{
    int l = 0;
    int r = n - 1;
    mid = n / 2;

    while (l <= r)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter number of count :";
    cin >> n;
    int arr[n], mid, key;
    cout << "Enter key :";
    cin >> key;
    cout << "Enter sorted elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarySearch(arr, n, mid, key);
    return 0;
}