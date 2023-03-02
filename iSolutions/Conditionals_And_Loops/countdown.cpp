#include <iostream>
using namespace std;

int main()
{
  int seconds;
  cin >> seconds;

  while (seconds >= 0)
  {
    cout << seconds << endl;
    seconds--;
  }

  return 0;
}