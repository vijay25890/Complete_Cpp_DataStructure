#include <iostream>
using namespace std;

class Distance
{
private:
    int meters;

public:
    Distance()
    {
        meters = 0;
    }
    void displayData()
    {
        cout << "Meters value: " << meters;
    }
    friend void add(Distance &d);
};

void add(Distance &d)
{
    d.meters = d.meters + 5;
}

int main()
{
    Distance d1;
    d1.displayData();
    add(d1);
    d1.displayData();
    return 0;
}