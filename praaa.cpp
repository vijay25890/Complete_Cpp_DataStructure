#include <iostream>
using namespace std;

int main()
{
    // 0 1 1 2 3 5 8...
    int first = 0, second = 1, next;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            cout << first << " ";
        }
        else if (i == 1)
        {
            cout << second << " ";
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
            cout << next << " ";
        }
    }
    return 0;
}