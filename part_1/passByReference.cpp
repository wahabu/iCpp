#include <iostream>
using namespace std;

void myFunc(int *x);

int main() {
    int var = 7;
    myFunc(&var);
    cout << var;
    return 0;
    
    }

void myFunc(int *x) {
    *x = 10;
}