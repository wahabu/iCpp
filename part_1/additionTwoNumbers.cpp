#include <iostream>
using namespace std;

// Declare a function
void inputTwoNumbers();
int addition(int num1, int num2);

int main() {
    cout << "Welcome to program to Addition 2 numbers you want" << endl;
    cout << "If you want to use it, type \"yes\"; if you don't, type \"no\"" << endl;
    string user;
    cin >> user;
    if (user == "yes" || "Yes") {
        inputTwoNumbers();
    } else {
        if  (user == "no" || "No") {
        cout << "See you later" << endl;
        } else {
            cout << "Please make sure about your enter." << endl;
        }
    }
    
    return 0;
}

void inputTwoNumbers() {
    cout << "Enter 1st Number: ";
    int first, second;
    cin >> first;
    cout << "Enter 2nd Number: ";
    cin >> second;
    cout << "The result: ";
    cout << first << " + " << second << " = " << addition(first, second);
}

int addition(int num1, int num2) {
    return num1 + num2;
    }