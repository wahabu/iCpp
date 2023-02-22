# Basic Arithmetic

### PROBLEM

You need to buy paint for the floor of a rectangular room.
The given program takes the room's __length__ and __width__ as input.

#### Task
Complete the program to calculate and output the __area__ of the room.

### CODE
```cpp
#include<iostream>
using namespace std;

int main() {
    //side of the room
    double length;
    double width;
    cin >> length;
    cin >> width;

    //output the area
    cout << length * width, '\n';

    return 0;
    }
```

### OUTPUT OF THE CODE
#### Sample SInput
> 5.4<br>
> 2.3

#### Sample Output
> 12.42<br>
