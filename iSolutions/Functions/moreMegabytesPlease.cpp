#include <iostream>
using namespace std;

void promotion(int *megabytes)
{

  // taking multiplier as input
  int multiplier;
  cin >> multiplier;
  *megabytes *= multiplier;
}

int main()
{
  // getting initial count of megabytes
  int megabytes;
  cin >> megabytes;

  // printing the count of megabytes before the promotion
  cout << "Before the promotion: " << megabytes << endl;

  // complete the function call
  promotion(&megabytes);

  // printing the count of megabytes after the promotion
  cout << "After the promotion: " << megabytes << endl;

  return 0;
}