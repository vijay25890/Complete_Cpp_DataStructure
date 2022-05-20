#include <iostream>
using namespace std;

void binarySearch(int arr[], int size, int element)
{
    int l = 0;
    int r = size - 1;
    while (l <= r)
    {
        int mid = size / 2;
        if (arr[l] == element)
        {
            cout << "Element found at location :" << l << endl;
            return;
        }
        else if (arr[r] == element)
        {
            cout << "Element found at location :" << r << endl;
            return;
        }
        else if (arr[mid] == element)
        {
            cout << "Element is found at location :" << mid << endl;
            return;
        }
        else if (arr[mid] > element)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int main()
{
    int size;
    cout << "Enter size of array :";
    cin >> size;
    int arr[size];
    int element;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ch;
    while (ch != 2)
    {
        cout << "Case 1:search element" << endl;
        cout << "Case 2:Exit " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter element which you want to saerch :";
            cin >> element;
            binarySearch(arr, size, element);
            break;

        case 2:
            cout << "Ended...";
            break;

        default:
            break;
        }
    }

    return 0;
}
