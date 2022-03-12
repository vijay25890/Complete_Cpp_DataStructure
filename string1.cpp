#include <iostream>

using namespace std;

int main()
{
    // string str;
    // getline(cin, str);
    // cout << str;
    char st[100];
    // cin.get(st, 100);
    // cout << st;
    for (int i = 0; i < 10; i++)
    {
        cin.get(st[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << st[i];
    }
    return 0;
}