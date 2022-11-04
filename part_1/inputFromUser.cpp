#include <iostream>
using namespace std;

// Declare a function
void userInfo();

int main(){
    userInfo();
    return 0;
}

void userInfo() {
    string name;
    int age;
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Enter your age:" << endl;
    cin >> age;

    cout << "Your name is:" << name << endl;
    cout << "Your age is:" << age << endl;
}
