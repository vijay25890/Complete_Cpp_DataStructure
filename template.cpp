#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T a = 10;
    T fun(T b)
    {
        // cin >> a;
        this->a = b + 5;
        cout << a << endl;
    }
    T data();
};

template <class T>
T A<T>::data()
{
    cout << "hii";
}

int main()
{
    A<float> obj;
    obj.fun(10.5);
    A<int> obj1;
    obj1.fun(10);
    obj1.data();
    return 0;
}