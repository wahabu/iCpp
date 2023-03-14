#include <iostream>
using namespace std;

void winners(string customers[], int x, int n)
{
  for (int i = n - 1; i <= x; i += n)
  {
    cout << customers[i] << endl;
  }
}

int main()
{

  string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

  // getting the lucky number as input
  int n;
  cin >> n;
  // call function
  winners(customers, 13, n);

  return 0;
}