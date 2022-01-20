#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;
    cout << "enter string s1:";
    getline(cin, s1);
    cout << "enter string s2:";
    getline(cin, s2);
    result = s1 + s2;
    cout << "result is:" << result;
    return 0;
}