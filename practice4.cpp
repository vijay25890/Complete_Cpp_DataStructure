#include <iostream>
using namespace std;

string fun(string s1, char s2, string s3)
{
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2 == s1[i])
        {
            continue;
        }
        else
        {
            s3.push_back(s1[i]);
        }
    }
    return s3;
}

int main()
{
    string s1, s3;
    char s2;
    cout << "Enter a first string s1 :";
    getline(cin, s1);
    cout << "Enter a second string s2 :";
    cin >> s2;
    cout << "New string is: ";
    cout << fun(s1, s2, s3);
    return 0;
}