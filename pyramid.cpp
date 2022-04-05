#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;                    // 5
    for (int i = 1; i <= num; i++) // 1 2
    {
        for (int j = 1; j <= num; j++) // 1 to 5
        {
            if (j <= num - i) // 1<=4 2<=4 3<=4 4<=4 5<=4
            {
                cout << 0;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}