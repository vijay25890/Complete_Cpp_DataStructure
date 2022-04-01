#include <iostream>
using namespace std;

int main()
{
    int newNum, oldNum, digit, rev = 0;
    cin >> oldNum; // 101
    newNum = oldNum;
    while (oldNum != 0)
    {
        digit = oldNum % 10;      // 1 0 0
        rev = (rev * 10) + digit; // 1 10 100
        oldNum = oldNum / 10;     // 10 0 0
    }

    if (newNum == rev)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
    return 0;
}