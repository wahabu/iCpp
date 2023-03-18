#include <iostream>
#include <string>
using namespace std;

class Painting
{
public:
  // define the constructor
  Painting(string name)
  {
    cout << name << endl;
  }
};
int main()
{
  string name;
  cin >> name;

  Painting painting(name);

  return 0;
}