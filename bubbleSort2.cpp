#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
