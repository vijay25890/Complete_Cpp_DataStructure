#include <bits\stdc++.h>
using namespace std;

class student
{
public:
    int a = 10;
    int fun()
    {
        return a;
    }
    student()
    {
        cout << a;
    }
};

int main()
{
    student s;
    cout << s.fun();
    return 0;
}
