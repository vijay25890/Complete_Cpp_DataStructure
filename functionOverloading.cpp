#include<iostream>
using namespace std;

class student
{
    public:
    int a=5;

    float circle(int r,float v)
    {
        return 3.14*r*v;
    }

    float area(int l,int r)
    {
        return l*r+a;
    }
};

int main()
{
    student s;
    cout<<(s.circle(5,5.5));
    cout<<(s.area(5,5));
    return 0;
}            