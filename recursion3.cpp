#include <iostream>
using namespace std;

void fun2(int);
void fun1(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun2(n - 1);
    }
}

void fun2(int m)
{
    if (m > 0)
    {
        cout << m << " ";
        fun1(m / 2);
    }
}

int main()
{
    int n;
    cin >> n;
    fun1(n);
    return 0;
}