#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) // i=5
    {
        for (int j = 1; j <= i; j++) // j=1
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}