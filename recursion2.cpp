#include <iostream>
using namespace std;

int fun(int a)
{
    if (a != 0)
    {
        return (a + fun(a - 1));
    }
    else
        return a;
}

int main()
{
    cout << fun(3);
    return 0;
}