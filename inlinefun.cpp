#include <iostream>
using namespace std;

void fun();
int main()
{
    fun();
    return 0;
}

inline void fun()
{
    cout << "hii";
}