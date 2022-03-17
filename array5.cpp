#include <iostream>
using namespace std;

int main()
{
    int n;
    int max = INT16_MIN, min = INT16_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max << " " << min;
    return 0;
}