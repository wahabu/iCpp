#include <iostream>
// using namespace std;

int main()
{
  int age;
  // std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 0 && age <= 3)
  {
    std::cout << "Free\n";
  }
  else if (age >= 4 && age <= 6)
  {
    std::cout << "Discounted\n";
  }
  else if (age >= 7)
  {
    std::cout << "Normal\n";
  }
  else
  {
    std::cout << "Invalid age\n";
  }

  return 0;
}