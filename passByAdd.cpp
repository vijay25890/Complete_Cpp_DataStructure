#include <iostream>
using namespace std;

void passByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // cout << a << " " << b << endl;
}

int main()
{
    int x = 5;
    int y = 4;
    cout << x << " " << y << endl;
    passByAddress(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}
