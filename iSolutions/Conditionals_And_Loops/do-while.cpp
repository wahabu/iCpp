#include <iostream>
using namespace std;

int main()
{
  int purchaseAmount = 0;
  double totalPrice;

  // your code goes here
  int item;

  do
  {
    cin >> item;
    totalPrice = item * 0.15;
    cout << totalPrice << endl;

    purchaseAmount++;
  } while (purchaseAmount < 3);

  return 0;
}