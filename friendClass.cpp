#include <iostream>
using namespace std;

class myClass1
{
    friend class myClass2;
    int x;

public:
    myClass1(int a)
    {
        x = a;
    }
};

class myClass2
{
public:
    void showData(myClass1 obj)
    {
        cout << obj.x;
    }
};

int main()
{
    myClass1 obj1(5);
    myClass2 obj2;
    obj2.showData(obj1);

    return 0;
}