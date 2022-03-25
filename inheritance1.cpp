#include <iostream>
using namespace std;

class car
{
public:
    int enginePower, tyreSize;
    car()
    {
        enginePower = 10, tyreSize = 10;
        cout << enginePower << " " << tyreSize << " ";
    };
};
class sportcar : public car
{
public:
    int highEnginePower, tyreSize1;
    sportcar()
    {
        highEnginePower = 60 + enginePower, tyreSize1 = 10 + tyreSize;
        cout << highEnginePower << " " << tyreSize1;
    };
};
int main()
{
    sportcar carObject;
    return 0;
}