# Assignment and increment operators

### PROBLEM

A robot can type __300 letters per minute__.
The given program takes the text input __time__ (in minutes).

#### Task
Complete the code to calculate and output the number of letters that will be typed in a given time. 

### CODE
```cpp
#include <iostream>
using namespace std;

int main() {
        int count = 300; // letter in a minute
        int time;
        cin >> time;
        
        //your code goes here
        count *= time;
        cout  << count << endl;
	return 0;
}
```

### OUTPUT OF THE CODE
#### Sample SInput
> 20 <br>

#### Sample Output
> 6000<br>
