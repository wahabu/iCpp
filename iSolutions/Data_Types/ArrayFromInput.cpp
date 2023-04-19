#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n; // size of the array
  // your code goes here
  int *nums = new int[n];

  int max = nums[0];
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
    if (nums[i] > max)
    {
      max = nums[i];
    }
  }

  cout << max;

  delete[] nums;

  return 0;
}