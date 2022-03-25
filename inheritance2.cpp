#include <iostream>
using namespace std;

class A
{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
};

class B : public A
{
public:
    B()
    {
        cout << a;
    };
};
int main()
{
    B bb;
    return 0;
}