# The If statement

### PROBLEM

Admission to the pool is free for children under 7 years of age.
The given program takes __age__ as an input.

#### Task
Complete the code to output "free" if the child's __age__ is __less__ than 7.

### CODE
```cpp
#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 7) {
        cout << "free\n";
    }
    return 0;
    }
```

### OUTPUT OF THE CODE
#### Sample SInput
> 6<br>

#### Sample Output
> free<br>