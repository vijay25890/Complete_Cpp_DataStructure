#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "1 for addition" << endl;
    cout << "2 for mul" << endl;
    cout << "3 for division" << endl;
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "Addition is : " << a + b;
        break;

    case 2:
        cout << "Mul is : " << a * b;
        break;

    case 3:
        cout << "division is : " << a / b;
        break;

    default:
        break;
    }
    return 0;
}