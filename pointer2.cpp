#include <iostream>
using namespace std;

int main()
{
    int var = 5;
    int *ptr;
    ptr = &var;
    cout << var << endl;
    cout << *ptr << endl;
    cout << ptr << endl;
    *ptr = 6;
    cout << var << endl;
    cout << *ptr << endl;
    cout << ptr << endl;
    return 0;
}