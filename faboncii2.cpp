#include <bits\stdc++.h>
using namespace std;

int main()
{
    int nextTerm = 0, term1 = 0, term2 = 1, number;
    cout << "Enter number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (i == 1)
        {
            cout << term1 << " ";
            continue;
        }
        else if (i == 2)
        {
            cout << term2 << " ";
            continue;
        }
        else
        {
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }
        cout << nextTerm << " ";
    }
    return 0;
}