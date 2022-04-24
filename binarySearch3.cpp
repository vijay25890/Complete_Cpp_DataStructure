#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key)
{
    int mid = r - l / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, l, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, r, key);
    }
}

int main()
{
    int n;
    cout << "Enter the count :";
    cin >> n;
    int arr[n], l = 0, r = n - 1, key;
    cout << "Enter the key :";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarySearch(arr, l, r, key);
    return 0;
}