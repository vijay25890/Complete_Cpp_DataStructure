#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        // if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        // {
        //     cout << str[i];
        // };

        // if (str[i] == '@' || str[i] == '#')
        // {
        //     continue;
        // }
        // else
        // {
        //     cout << str[i];
        // }

        if (str[i] != '@')
        {
            cout << str[i];
        }
    }
    return 0;
}