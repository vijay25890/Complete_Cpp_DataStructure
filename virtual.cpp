#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun()
    {
        cout << "function1" << endl;
    }
};

class B : public A
{
public:
    void fun()
    {
        cout << "function2" << endl;
    }
};

int main()
{
    A *ptr;
    B b;
    ptr = &b;
    ptr->fun();
    return 0;
}