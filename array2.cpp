#include <iostream>
#include <array>
using namespace std;

int main()
{
    // int arr[] = {2, 4};
    int arr[5];
    int temp, temp1;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
            temp = arr[0];
        }
    }
    cout << "\nGretest value of array is " << temp;
    for (int i = 0; i < 5; i++)
    {
        if (arr[0] > arr[i])
        {
            arr[0] = arr[i];
            temp1 = arr[0];
        }
    }
    cout << "\nSmallest value of array is " << temp1 << endl;
    cout << "Length of array is " << end(arr) - begin(arr) << endl;
    return 0;
}