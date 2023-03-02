# While Loop

### Task

Create a timer program that will take the number of seconds as input, output the remaining time and coundown to 0.

### CODE

```cpp
#include<iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;

    while (seconds >= 0) {
        cout << seconds << endl;
        seconds--;
    }

    return 0;
    }
```

### OUTPUT OF THE CODE

#### Sample Output

> 3  
> 2  
> 1  
> 0
