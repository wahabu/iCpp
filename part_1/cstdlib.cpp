#include <iostream>
#include <cstdlib>
using namespace std;

// In the c++ standard library, 
// you can access a pseudo random number 
// generator funcction that's called rand(). 
// When used, we are required to 
// include the header <cstdlib>

int main() {
    srand(98);
    for (int x = 1; x <= 7; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
    
    return 0;
}