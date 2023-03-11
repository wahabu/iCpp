#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  float temp;
  cin >> temp;

  if (temp >= 36.1 && temp <= 36.9)
  {
    cout << "OK";
  }
  else
  {
    cout << "Not OK";
  }

  return 0;
}