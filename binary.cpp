#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int mid, int key)
{
    int l = arr[0];
    int r = arr[n - 1];
    mid = n / 2;

    if (mid == key)
    {
        cout << mid << " ";
    }
    else if (mid > key)
    {
        r = mid - 1;
    }
    else
    {
        l = mid + 1; 
    }
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
    binarySearch(arr, n, mid, key);
    return 0;
}