#include <iostream>
using namespace std;

int main()
{

  int number;
  cin >> number;

  /*
  1 => Choose language
  2 => Contact the operator
  3 => Leave feedback
  */

  // if statements way
  //     if (number == 1) {
  //         cout << "Choose language\n";
  //     } else if (number == 2) {
  //         cout << "Contact the operator\n";
  //     } else if (number == 3) {
  //         cout << "Leave feedback\n";
  //     } else {
  //         cout << "Unknown\n";
  //     }
  //     return 0;
  // }
  switch (number)
  {
  case 1:
    std::cout << "Choose language\n";
    break;
  case 2:
    std::cout << "Contact the operator\n";
    break;
  case 3:
    std::cout << "Leave feedback\n";
    break;
  default:
    std::cout << "Unknown\n";
    break;
  }

  return 0;
}