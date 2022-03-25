#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter The Character" << endl;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "Charcter is vowel";
    }
    else
    {
        cout << "Character is consonant";
    }
    return 0;
}