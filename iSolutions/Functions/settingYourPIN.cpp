#include <iostream>
using namespace std;

int main()
{
  srand(0);
  int range;
  cin >> range;
  // your code goes here
  for (int i = 0; i <= 3; i++)
  {
    cout << (1 + (rand() % range));
  }

  return 0;
}
