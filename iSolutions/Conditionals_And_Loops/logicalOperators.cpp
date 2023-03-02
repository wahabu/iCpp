#include <iostream>
using namespace std;

int main()
{

  int vision;
  cin >> vision;

  int height;
  cin >> height;
  // your code goes here
  if (62 >= height <= 75 && vision == 100)
  {
    cout << "passed";
  }
  else
  {
    cout << "failed";
  }

  return 0;
}