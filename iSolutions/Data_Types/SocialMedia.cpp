// Social Media apps

#include <iostream>
using namespace std;

int main()
{
  // The topics are stored in the array its name [TOPICS]
  string topics[] = {"Sports", "Politics", "Business", "Technology", "Art"};

  // Code to take a number as input from the user, which is the topic interested
  int number;
  cin >> number;
  // Sample Input
  // 3

  // Output the topic name that has the corresponding index
  cout << topics[number] << endl;
  // Sample Output
  // Technology
  return 0;
}