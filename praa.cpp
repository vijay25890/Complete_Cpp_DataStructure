#include <iostream>
using namespace std;

void binary(int arr[], int element, int n, int l, int r, int mid)
{
    if (arr[l] == element)
    {
        cout << "Ele found at loaction :" << l;
        return;
    }
    else if (arr[r] == element)
    {
        cout << "Ele found at loaction :" << r;
        return;
    }
    else if (arr[mid] == element)
    {
        cout << "Ele found at loaction :" << mid;
        return;
    }
    else if (arr[mid] > element)
    {
        binary(arr, element, n, l, mid - 1, mid);
    }
    else if (arr[mid] < element)
    {
        binary(arr, element, n, mid + 1, r, mid);
    }
}

int main()
{
    int n, element;
    cin >> n;
    int l = 0;
    int r = n - 1;
    int mid = n / 2;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> element;
    binary(arr, element, n, l, r, mid);
}