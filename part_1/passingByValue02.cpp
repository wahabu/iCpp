#include <iostream>
using namespace std;

void myFeature(string feature);

int main() {
    string feature = "موهبة"; //"Talent";
    myFeature(feature);
    cout << feature;
}

void myFeature(string feature) {
    feature = "عبقري"; //"Genius";
}