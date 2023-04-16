#include <iostream>
using namespace std;

int main()
{
  double prices[] = {5.99, 3.2, 9.99, 29.99};

  for (double x : prices)
  {
    cout << x << endl;
  }
}