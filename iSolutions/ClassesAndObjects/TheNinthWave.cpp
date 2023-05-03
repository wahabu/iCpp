#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
        //define the constructor
        Painting(string name){
            cout << name;
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);
    return 0;
}