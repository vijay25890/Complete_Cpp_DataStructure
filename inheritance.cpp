//inherits the classes from another classes  
#include<iostream>
using namespace std;

class A
{
    public:
    int a=10;
    void funA()
    {
        cout<<a;
    }
};

class B:public A
{
    public:
    int b=20;
    void funB()
    {
        cout<<b;
    }
};

class C:public B
{
    public:
    int c=30;
    void funC()
    {
        cout<<c;
    }
};

int main()
{
    C obj;
    obj.funA();
    obj.funB();
    obj.funC();
    return 0;  
}     