#include <iostream>

using namespace std;
int main()
{
    string str;
    int j, i, temp;
    getline(cin, str);
    // cout << str;
    // for (i = 0; i < str.length(); i++)
    // {
    //     if (str[0] < str[i])
    //     {
    //         str[0] = str[i];
    //     }
    // }
    // cout << str[0];
    for (i = 0, j = str.length() - 1; i < str.length() / 2; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << str;
    return 0;
}