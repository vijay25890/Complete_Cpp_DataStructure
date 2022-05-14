#include <iostream>
using namespace std;

int main()
{
    int saving, person;
    cin >> saving;
    cin >> person;

    if (saving > 10000)
    {
        if (person > 1)
        {
            cout << "Dubai";
        }
        else
            cout << "Pune";
    }

    else if (saving > 5000 && person >= 2)
    {
        cout << "goa";
    }
    else
    {
        cout << "kolhapur";
    }
}