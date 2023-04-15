#include <iostream>
using namespace std;

int main()
{

  string breakfasts[] = {"Cinnamon Doughnuts", "Waffles", "Granola",
                         "Chorizo Burrito", "French Toast"};

  string newItem = "Fluffy Pancakes";

  int index;
  cin >> index;

  // code to replace the element as input
  for (int i = 0; i < 5; i++)
  {
    if (index == i)
    {
      breakfasts[i] = newItem;
    }
  }

  // code to output the new menu
  for (auto a : breakfasts)
  {
    cout << a << endl;
  }

  return 0;
}