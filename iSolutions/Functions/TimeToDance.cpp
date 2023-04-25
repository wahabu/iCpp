#include <iostream>
using namespace std;

// Define average() function here
double average(double score1, double score2, double score3)
{
  return (score1 + score2 + score3) / 3;
}

int main()
{
  double score1, score2, score3;
  cin >> score1 >> score2 >> score3;

  double result = average(score1, score2, score3);

  cout << result;

  return 0;
}