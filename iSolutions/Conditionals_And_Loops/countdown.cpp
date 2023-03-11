#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n >= 1)
  {
    cout << n << endl;

    if (n % 5 == 0)
    {
      cout << "Beep" << endl;

      n--;
    }

    return 0;
  }
