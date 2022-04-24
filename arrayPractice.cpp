#include <iostream>
using namespace std;

int main()
{
    // int arr[5];
    // int *p = new int[5];
    // p[0] = 5;
    // cout << p[0];
    // delete[] p;
    int *p = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    int *q = new int[4];
    for (int i = 0; i < 3; i++)
    {
        q[i] = p[i];
    }
    delete[] p;
    p = q;
    q = NULL;
    p[3] = 4;
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}