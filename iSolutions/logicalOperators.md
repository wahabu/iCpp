# Logical operators

### PROBLEM

Along with other physical health requirements, astronaut candidates must have perfect vision (100%) and their height must be between 62 and 75 inches. Write a program that accordingly takes the vision percentage and height (in inches) as an input and prints "passed" if given conditions are satisfied and "failed" if otherwise. 

#### Task
text text text

### CODE
```cpp
#include<iostream>
using namespace std;

int main() {

    int vision;
    cin >> vision;

    int height;
    cin >> height;
    //your code goes here
    if (62 >= height <= 75 && vision == 100) {
        cout << "passed";
    } else {
        cout << "failed";
    }
    
    return 0;
}
```

### OUTPUT OF THE CODE
#### Sample SInput
> 100<br>
> 80<br>

#### Sample Output
> failed<br>