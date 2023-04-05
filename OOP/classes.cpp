#include <iostream>
using namespace std;
// OOP -Object Oriented Programming

class Person
{
public:
  // attributes
  string name;
  string birthday;
  int age;

  // methods
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
  // create class object
  Person student;

  // another way to create class object
  Person *teacher = new Person;

  // modify class object attributes
  student.name = "Jone";
  student.age = 21;

  // another way of created class object should be like
  // the folloing to modify class object attributes
  teacher->name = "Nakano";
  teacher->age = 33;

  // call on class objects
  student.introduceSelf();

  // another way of modified class object attrubutes should be like
  // the folloing to call on class objects
  teacher->introduceSelf();
  delete teacher;
  return 0;
}