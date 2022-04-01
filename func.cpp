#include <iostream>
using namespace std;

void fun(int arr[], int n)
{
    0 arr[0] = arr[0] + 1;
    cout << arr[0] << endl;
}

int main()
{
    // int a = 5, b = 10;
    // cout << a << " " << b << endl;
    // fun(a, b);
    // cout << a << " " << b;
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    fun(arr, n);
    cout << arr[0] << endl;
    return 0;
}