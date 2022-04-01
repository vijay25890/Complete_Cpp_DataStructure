#include <iostream>
using namespace std;

int main()
{
    string a = "madam";
    string b = "";
    b.append(a);
    for (int i = 0, j = a.length() - 1; i < a.length() / 2; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << a << " " << b << endl;
    if (!b.compare(a))
    {
        cout << "String is equal";
    }
    else
    {
        cout << "Not equal";
    }
    return 0;
}