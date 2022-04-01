#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "Second largest number is " << arr[1];
    return 0;
}