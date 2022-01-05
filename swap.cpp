#include <iostream>
using namespace std;

int swap(int a, int b)
{
    // int a, b, temp;
    // cin >> a, b;
    a = 10;
    b = 20;
    cout << a << b;
    int temp = a;
    a = b;
    b = temp;
    //a=a+b;
    //b=a-b;
    //a=a-b;
    cout << a << b;
    return 0;
}

int main()
{
    int a, b;
    swap(a, b);
    return 0;
}