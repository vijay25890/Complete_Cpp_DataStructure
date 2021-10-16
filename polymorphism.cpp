// many forms
// using virtual function
#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "this is the base class's print function";
    }
    void display()
    {
        cout << "this is the base class's display function";
    }
};

class derived : public base
{

public:
    void print()
    {
        cout << "this is the derive class's print function";
    }
    void display()
    {
        cout << "this is the derive class's display function";
    }
};
int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr->display();
    baseptr->print();
    return 0;
}