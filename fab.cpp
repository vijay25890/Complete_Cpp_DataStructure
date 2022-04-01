#include <iostream>
using namespace std;

int main()
{
    int num, nextTerm, term1 = 0, term2 = 1;
    cout << "Enter a num :";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            cout << term1 << " ";
            continue;
        }
        else if (i == 1)
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