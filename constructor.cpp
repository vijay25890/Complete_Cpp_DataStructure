#include<iostream>
using namespace std;

class student
{
    public:
    int age;
    string name;

  student()
  {
    cout<<"Default Constructor";
  };

  student(int x, string y)
  {
     cout<<"Parameterized Constructior";
     cout<<(age=x);
     cout<<(name=y); 
  }
  student(student &a)
  {
      cout<<"Copy Constructor";
      name=a.name;
      cout<<name;
  }
  ~student()
  {
      cout<<"Destructor";
  }
};

int main()
{
    student a;
    student b(10,"vijay");
    student c=a;
}


//getter and setter used for accesing private data members outside the class 