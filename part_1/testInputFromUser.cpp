#include <iostream>
using namespace std;

// Declare a function
void requestName();
void requestAge();
void userInputInfo();
void outputUserInfo();

int main() {    
    userInputInfo();
    outputUserInfo();
    return 0;
}

void requestName() {
    cout << "Enter your name: ";
}

void requestAge() {
    cout << "Enter your age: ";
}
void userInputInfo(string name, int age) {
    requestName();
    cin >> name;
    requestAge();
    cin >> age;
    // cout << name << " " << age;
}

void outputUserInfo() {
    cout << "Your name and age is:" << endl;
}