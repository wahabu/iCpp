#include <iostream>
#include <typeinfo>
using namespace std;

/*
int (integer values) uses %d.
float (floating point values) uses %f.
char (single character values) uses %c.
character strings (arrays of characters, discussed later) use %s.
*/
int main() {
    auto var_1 = 7.003;
    auto var_2 = '7';
    auto var_3 = "Wahab";
    auto var_4 = 3.14;

    cout << typeid(var_1).name() << endl;
    cout << typeid(var_2).name() << endl;
    cout << typeid(var_3).name() << endl;
    cout << typeid(var_4).name() << endl;

    return 0;
}