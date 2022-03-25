#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size" << endl;
    cin >> n;
    int array1[n];
    int array2[n];
    int array3[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> array2[i];
    }

    for (int i = 0; i < 3; i++)
    {
        array3[i] = array1[i] + array2[i];
        cout << array3[i] << " ";
    }
    return 0;
}