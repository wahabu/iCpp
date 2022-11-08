#include <iostream>
using namespace std;

// Use const to prevent modifications to variables,
// and const pointers and const references prevent
// changing the data pointed to (or referenced).

const string message = "Hello";
string name;

int main() {
    name = "Wahab";
    cout << message << " " << name << endl;

    name = "Naomi";
    cout << message << " " + name << endl;

    name = "Aya";
    cout << message << " " << name << "\n";

    return 0;
}