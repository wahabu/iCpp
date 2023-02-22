# While loop

### PROBLEM

You are given a program that outputs all the numbers from 0 to 20.
Change the code to make it output only numbers that are __multiples of 3__

#### Task
text text text

### CODE
```cpp
#include<iostream>
using namespace std;

int main() {
    int num = 0;
    while (num <= 20) {
        if (num % 3 == 0 && num != 0) {
            // if (num > 0) {
                cout << num << endl;
            // }
            }
        }
        num +=1;
    }
    return 0;
    }
```

### OUTPUT OF THE CODE
#### Sample Output
> 3<br>
> 6<br>
> 9<br>
> 12<br>
> 15<br>
> 18<br>