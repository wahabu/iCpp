#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cout << "Enter a positive integer: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  cout << "The sum of the numbers 1 to " << n << " is " << sum << endl;

  return 0;
}
