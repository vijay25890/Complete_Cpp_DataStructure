#include <iostream>
using namespace std;

int main()
{
    int num1, num2; // 5 4
    cout << "Enter Two Numbers :" << endl;
    cin >> num1 >> num2;
    num1 = num1 + num2; // 9
    num2 = num1 - num2; // 5
    num1 = num1 - num2; // 4
    cout << num1 << " " << num2;
    return 0;
}