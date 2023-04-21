#include <iostream>
using namespace std;

// define the bot() function here
void user(string &name)
{
  cin >> name;
}
void bot()
{
  string name;
  user(name);
  cout << "Welcome, " + name + "!" << endl;
}
int main()
{
  bot();

  return 0;
}