// class is blue print of
// object is instance of class

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void print()
    {
        cout << "Name =";
        cout << name << endl;
        cout << "Age =";
        cout << age << endl;
        cout << "Gender =";
        cout << gender << endl;
    }
    int data();
};

int student::data()
{
    int a = 10;
    return a;
}
int main()
{
    student s;
    cout << s.data();
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name :";
        cin >> arr[i].name;
        cout << "Age :";
        cin >> arr[i].age;
        cout << "Gender :";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].print();
    }

    return 0;
}