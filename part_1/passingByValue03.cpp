#include <iostream>
using namespace std;

void myChange(int &y);

int main() {
    int x = 0;
    myChange(x);
    cout << x << endl;
    
    return 0;
}

void myChange(int &y) {
    y = 1;
}