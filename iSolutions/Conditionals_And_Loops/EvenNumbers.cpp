#include <iostream>

int main()
{
  int x = 0;

  while (x <= 10)
  {
    if (x % 2 == 0)
    {
      std::cout << x << " ";
    }
    x++;
  }

  return 0;
}