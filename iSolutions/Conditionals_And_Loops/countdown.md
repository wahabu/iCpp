# Countdown

### Task

We need to make a countdown app.  
Given a number **N** as input, output numbers from **N** to **1** on separate lines.  
Also, when the current countdown number is a multiple of 5, the app should output "**Beep**".

### CODE

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n >= 1) {
        cout << n << endl;

        if (n % 5 == 0) {
            cout << "Beep" << endl;
        }

        n--;
    }

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 15

#### Sample Output

> 15  
> Beep  
> 14  
> 13  
> 12  
> 11  
> 10  
> Beep  
> 9  
> 8  
> 7  
> 6  
> 5  
> Beep  
> 4  
> 3  
> 2  
> 1
