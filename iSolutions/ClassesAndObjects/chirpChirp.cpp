#include <iostream>
using namespace std;

class Bird
{
  // complete the class, add makeSound() method
public:
  void makeSound()
  {
    cout << "chirp-chirp" << endl;
  }
};

int main()
{

  // instantiation
  Bird bird;

  // function call
  bird.makeSound();

  return 0;
}