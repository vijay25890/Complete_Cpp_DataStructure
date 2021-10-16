//hidding sensitive data from user
#include <iostream>
using namespace std;

class A
{
public:
    //access from anywhere
    int a;
    void funA()
    {
        cout << "Function A";
    }

private:
    //private only
    int b;
    void funB()
    {
        cout << "Function B";
    }

protected:
    //not use outside the class
    int c;
    void funC()
    {
        cout << "Function C";
    }
};

int main()
{
    A obj;
    obj.funA();
    return 0;
} 