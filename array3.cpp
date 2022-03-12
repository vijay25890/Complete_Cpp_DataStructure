#include <iostream>

using namespace std;

int main()
{
    int i, j, num, arr[20], temp;
    cout << "Number of elements";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (i = 0, j = num - 1; i < num / 2; i++, j--)
    {
        // temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}