#include <iostream>
using namespace std;

/*
1. Shooter
2. Puzzle
3. Snake
*/
// define the run() function here
void run(int number)
{
  switch (number)
  {
  case 1:
    cout << "Shooter";
    break;
  case 2:
    cout << "Puzzle";
    break;
  case 3:
    cout << "Snake";
  }
}

int main()
{
  int number;
  cin >> number;
  run(number);
}