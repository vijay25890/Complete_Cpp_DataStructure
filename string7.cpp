#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "ACACcacac";
    string str1 = "ACACcacac";
    string str2 = "ACACcacac";
    string str3 = "5451685";
    cout << str << endl;
    cout << str1 << endl;
    // clear
    str.clear();
    cout << str << endl;
    // append
    cout << str.append(str1);
    cout << str << endl;
    // compare
    cout << str2.compare(str1) << endl;
    // lower upper
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    // sort
    sort(str3.begin(), str3.end(), greater<char>());
    cout << str3;
    // empty
    if (str.empty())
    {
        cout << "empty";
    }
    // erase
    str3.erase(3, 3);
    cout << str3;
    // find
    cout << str3.find("5");
    // insert
    str.insert(3, "hjh");
    cout << str;
    // resize
    str.resize(20);
    cout << str.length();
    // substr
    str.substr(3, 5);
    // string to int stoi
    int x = stoi(str);
    // int to string
    to_string(x);
    return 0;
}