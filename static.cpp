#include <iostream>
using namespace std;

class Myclass
{
public:
    int x;
    static int count;
    Myclass()
    {
        count++;
    }
    static int get()
    {
        return count;
    }
};

int Myclass::count = 0;

int main()
{
    // cout << "inital count :" << Myclass::count;
    // Myclass m;
    // cout << "after count :" << Myclass::count;
    cout << "after count :" << Myclass::get();
    return 0;
}