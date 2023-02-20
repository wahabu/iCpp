#include <iostream>
using namespace std;

// GLOBAL SCOPE
int printAge();
int age, mobile = 321, height = 177;

int main() {
    // LOCAL SCOPE
    age = 12; // << global scope
    cout << "global age: " << age << endl;
    int age = 10; //  << local scope for main
    cout << "main age: " << age << endl;
    printAge();
    cout << age << endl;
    printAge();
    cout << age << endl;
    return 0;   
}

int printAge() {
    age = 11; // << global scope
    cout << "global age: " << age << endl;
    int age = 13; // << local scope for printAge
    cout << "printAge age:" << age << endl;
    return 0;
}