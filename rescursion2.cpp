#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 3)
    {
        cout << n << " ";
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}