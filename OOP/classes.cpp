#include <iostream>
using namespace std;
// OOP -Object Oriented Programming

class Person
{
public:
  string name;
  string birthday;
  int age;
  void introduceSelf()
  {
    cout << "Hello, my name is " << name << endl;
    cout << "and I am " << age << " years old." << endl;
  }
};

class Course
{
  string title;
  int level;
};
int main()
{
  Person student;
  Person *teacher = new Person;

  student.name = "Jone";
  student.age = 21;

  teacher->name = "Nakano";
  teacher->age = 33;

  student.introduceSelf();
  teacher->introduceSelf();
  delete teacher;
  return 0;
}