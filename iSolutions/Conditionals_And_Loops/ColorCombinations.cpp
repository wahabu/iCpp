#include <iostream>
using namespace std;

int main()
{
  int n, factorial = 1;

  cout << "Enter the number of colors: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }

  cout << n << endl
       << "The number of possible color combinations is ";
  cout << factorial << endl;

  return 0;
}