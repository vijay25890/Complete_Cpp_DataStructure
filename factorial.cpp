#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;
    cout << "Enter Number";
    cin >> n;
    if (n < 0)
    {
        cout << "Enter Positive Number";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i; 
        }
        cout << "Factorial Of Number is:" << fact;
    }
    return 0;
}  