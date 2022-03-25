#include <bits\stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v1;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    v.swap(v1);
    return 0;
}