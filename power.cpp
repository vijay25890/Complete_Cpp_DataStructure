#include <iostream>
using namespace std;

int main()
{
    int num, pow, result = 1;
    cin >> num;
    cin >> pow;
    int k;
    for (int i = 1; i <= pow; i++)
    {
        result = result * num; // 5 25 125
    }
    cout << result;
    return 0;
}