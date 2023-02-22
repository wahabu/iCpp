# File loop

### PROBLEM

You are on a 5 hour sea voyage. The ship sails at a speed of 40 km per hour. Write a program that will output how many kilometers the ship has traveled by each hour.

### CODE
```cpp
#include<iostream>
using namespace std;

int main() {
    int distance =0;
    // your code goes here
    for (int i=1; i <= 5; i++) {
        cout << 40 * i << endl;
    }

    return 0;
}
```

### OUTPUT OF THE CODE
#### Sample Output
> 40<br>
> 80<br>
> 120<br>
> 160<br>
> 200<br>