#include <iostream>
using namespace std;

int main()
{
    int amount, debitAmount;
    cout << "Add amount" << endl;
    cin >> amount;
    cout << "Debit amount" << endl;
    cin >> debitAmount;
    int finalA = amount;
    try
    {
        if (debitAmount > amount)
        {
            throw amount;
        }
        else
            cout << "Sucessfully debited" << endl;
    }
    catch (int e)
    {
        cout << "Low balance" << endl;
    }

    int n;
    cout << "1:check balance" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        if (debitAmount <= amount)
        {
            amount = amount - debitAmount;
            cout << amount << endl;
        }
        else
        {
            cout << finalA;
        }
        break;
    }
    default:
    {
        cout << "Error";
    }
    }
    return 0;
}