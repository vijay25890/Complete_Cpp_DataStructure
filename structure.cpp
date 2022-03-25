#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    double sallary;
};

int main()
{
    Person p1, p2[2];
    // cout << "Enter person details" << endl
    //      << "Enter person name :";
    // cin.getline(p1.name, 100);
    // cout << "Enter age :";
    // cin >> p1.age;
    // cout << "Enter sallary :";
    // cin >> p1.sallary;
    // cout << "Person details" << endl;
    // cout << "Person name :" << p1.name << endl;
    // cout << "Person age :" << p1.age << endl;
    // cout << "Person sallary :" << p1.sallary << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> p2[i].name;
        cin >> p2[i].age;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << p2[i].name << endl;
        cout << p2[i].age << endl;
    }
    return 0;
}