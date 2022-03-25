#include <iostream>
using namespace std;

int main()
{
    int size;
    int *ptr;

    cout << "Enter number of values0";
    cin >> size;

    ptr = new int[size];
    cout << "values of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}