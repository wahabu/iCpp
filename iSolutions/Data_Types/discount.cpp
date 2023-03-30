#include <iostream>
using namespace std;

int main()
{
  double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};

  // length calculation
  int len = sizeof(items) / sizeof(items[0]);

  double percent_off;
  int user;
  cin >> user;

  // your code goes here
  for (int i = 0; i < len; i++)
  {

    percent_off = items[i] - (items[i] * user / 100);
    cout << percent_off << " ";
  }

  return 0;
}