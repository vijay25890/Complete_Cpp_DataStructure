#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str = "hhhhHHHH$";
    for (int i = 0; i < str.size(); i++)
    {
        // if (str[i] >= 'a' && str[i] <= 'z')
        // {
        //     continue;
        // }
        if ((str[i] != '$') && str[i] >= 'a' && str[i] <= 'z')
        {
            cout << str[i];
        }
    }
    return 0;
}
