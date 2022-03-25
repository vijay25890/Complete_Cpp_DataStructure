#include <bits\stdc++.h>
using namespace std;

int data(int c);

class student
{
public:
    void student1(int a)
    {
        cout << a << " ";
    }

    void student1(float b)
    {
        cout << b << " ";
    }
};

int main()
{
    student s1;
    s1.student1(5);
    s1.student1(5.5f);
    data(54);
    return 0;
}

int data(int a)
{
    cout << "hiii";
}