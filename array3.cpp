#include <iostream>

using namespace std;

int main()
{
    int i, j, num, arr[20], b[20], temp;
    cout << "Number of elements";
    cin >> num;
    int rev = 0;
    int rem;

    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < num; i++)
    {
        // temp = arr[i];
        // arr[i] = b[j];
        // arr[j] = temp;
        rem = arr[i] % 10;
        rev = rev * 10 + rem;
        arr[i] /= 10;
        // arr[i] = arr[i] + arr[j];
        // arr[j] = arr[i] - arr[j];
        // arr[i] = arr[i] - arr[j];
    }

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}