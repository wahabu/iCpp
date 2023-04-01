#include <iostream>
using namespace std;

int main()
{

  string arr[3][3] = {
      {"Python", "JS", "C++"},
      {"PHP", "SQL", "Java"},
      {"C#", "Swift", "Kotlin"},
  };
  // your code goes here
  int k, j;
  for (k = 0; k < 3; k++)
  {
    for (j = 0; j < 3; j++)
    {
      // cout << arr[k][j] << " ";
      if (k == 0 && j == 2)
      {
        cout << arr[k][j];
      }
    }
  }
  return 0;
}