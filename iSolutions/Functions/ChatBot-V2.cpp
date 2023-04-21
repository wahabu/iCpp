#include <iostream>
using namespace std;

void bot(int mode, string name)
{
  if (mode == 1)
  {
    cout << "Welcome, " + name + "!" << endl;
  }
  else if (mode == 2)
  {
    cout << "Goodbye, " + name + "!" << endl;
  }
  else
  {
    cout << "Try again" << endl;
  }
}
int main()
{
  int mode;
  cin >> mode;

  string name;
  cin >> name;

  bot(mode, name);
}