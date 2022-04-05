#include <iostream>
using namespace std;

int fun(int n)
{
    if (n == 10)
    {
        return n;
    }
    else
    {
        fun(fun(n + 2));
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}