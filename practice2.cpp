#include <iostream>
using namespace std;

int main()
{
    string str;
    int ovel = 0,conso=0;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] = 'a' || 'e' || 'i' || 'o' || 'u')
        {
            ovel++;
        }
        else{
            conso++;
        }
    }
    cout << count;
}