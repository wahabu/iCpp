// Total Price calculate apps

#include <iostream>
using namespace std;

int main()
{

  // prices array stores of an order
  double prices[] = {6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2};

  double total;
  // code to calulate the total of the order
  for (auto a : prices)
  {
    total += a;
  }

  // code to output the total of the order
  cout << total;

  return 0;
}