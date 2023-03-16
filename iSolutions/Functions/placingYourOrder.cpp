#include <iostream>
using namespace std;

void printOrder(string type)
{

  cout << "Black tea\n"
       << type;
}
int main()
{
  string friendOrder;
  cin >> friendOrder;

  printOrder(friendOrder);
  cout << endl;
  return 0;
}