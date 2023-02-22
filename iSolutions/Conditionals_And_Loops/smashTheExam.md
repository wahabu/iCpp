# The Else Statement

### PROBLEM

To study at a university, you must score higher than or 100 points on an exam.
The given program takes __points__ as input.

#### Task
Complete the code to output "pass" if the score is higher than or equal to 90, otherwise print "fail".

### CODE
```cpp
#include<iostream>
using namespace std;

int main() {
    double points;
    cin >> points;

    //your code goes here
    if (points >= 90) {
        cout << "pass";
    } else {
        cout << "fail";
    }
    return 0;
    }
```

### OUTPUT OF THE CODE
#### Sample SInput
> 95<br>

#### Sample Output
> pass<br>