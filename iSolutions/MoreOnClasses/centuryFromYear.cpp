#include <iostream>
using namespace std;

class centuryFromYear
{
public:
  centuryFromYear(int y)
  {
    setYear(y);
  }
  void setYear(int x)
  {
    year = (x + 99) / 100;
  }
  int getYear()
  {
    return year;
  }

private:
  int year;
};

int main()
{
  int year;
  cin >> year;
  centuryFromYear obj(year);
  cout << obj.getYear();
  return 0;
}