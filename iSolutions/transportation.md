# Transportation

### PROBLEM

You are making a program for a bus service.
A bus can transport 50 passengers at once.
Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have. 

#### Explantion:
The first bus will transport 50 passengers, leaving 126-50=76 in the station. The next one will leave 26 in the station, thus, the last bus will take all of the 26 passengers, having 50-26=24 seats left empty. 

### CODE
```cpp
#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int busSeat= 50;
    int numberOfPassengers;
    cin >> numberOfPassengers;
    numberOfPassengers = busSeat - (numberOfPassengers % busSeat);
    //numberOfPassengers = numberOfPassengers;
    cout << numberOfPassengers, '\n';
    
    return 0;
}
```

### OUTPUT OF THE CODE
#### Sample SInput
> 126<br>

#### Sample Output
> 24<br>
