#include <iostream>
using namespace std;

int fact(int num)
{
    // int ans = 1;
    // for (int i = num; i > 0; i--)
    // {
    //     ans = ans * i;
    // }
    // return ans;
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return fact(num - 1) * num;
    }
}

int main()
{
    int num;
    cin >> num;
    cout << fact(num);
    return 0;
}