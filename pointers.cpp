// pointer are varibles that store the addresss of other variables
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    // value of a
    cout << *ptr << endl;
    *ptr++;
    cout << *ptr << endl;
    // address of a
    cout << ptr << endl;
    ptr = &a;
    // int **q = ptr;
    // address get incresed by 4 because of int
    int **q = &ptr;
    cout << **q << endl;
    // print the value of a derefrence
    cout << *q << endl;
    // print the pointer location of a
    return 0;
}