#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "Animals sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog bark" << endl;
        Animal ::makeSound();
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "cat mau" << endl;
    }
};

int main()
{
    Animal a1;
    a1.makeSound();
    Dog a2;
    a2.makeSound();
    Cat a3;
    a3.makeSound();
    Animal *ptr;
    Cat c;
    ptr = &c;
    ptr->makeSound();
    return 0;
}