#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  int busSeat = 50;
  int numberOfPassengers;
  cin >> numberOfPassengers;
  numberOfPassengers = busSeat - (numberOfPassengers % busSeat);
  // numberOfPassengers = numberOfPassengers;
  cout << numberOfPassengers, '\n';

  return 0;
}