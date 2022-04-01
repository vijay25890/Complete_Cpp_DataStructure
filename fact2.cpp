#include <iostream>
using namespace std;

int main()
{
    int num1, fact = 1;
    cout << "Enter a number :";
    cin >> num1;
    for (int i = num1; i > 0; i--) // 5
    {
        fact = fact * i; // 5 20 60 120
    }
    cout << fact;
    return 0;
}