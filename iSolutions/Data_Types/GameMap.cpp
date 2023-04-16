#include <iostream>
using namespace std;

int main()
{
  int map[7][7] = {
      {0, 0, 1, 1, 0, 1, 0},
      {1, 0, 0, 1, 1, 0, 1},
      {0, 1, 0, 1, 0, 0, 0},
      {0, 0, 0, 0, 0, 1, 0},
      {0, 1, 1, 0, 0, 1, 0},
      {0, 0, 1, 0, 0, 0, 1},
      {0, 1, 0, 0, 0, 0, 1}};

  int row, col;
  cin >> row >> col;

  cout << map[row][col] << endl;

  return 0;
}