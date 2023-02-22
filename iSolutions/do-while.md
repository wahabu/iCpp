# do-while

### PROBLEM

A supermarket has launched a campaign offering a 15% discount on 3 items.
Write a program that takes the total price for every purchase as input and outputs the relevant discount.

### EXPLANATION
2250 represents a 15% discount for a 15000 purchase; 600 for 4000 and 1005 for 6700 accordingly. 

### CODE
```cpp
#include<iostream>
using namespace std;

int main() {
    int purchaseAmount = 0;
    double totalPrice;

    //your code goes here
    int item;

    do {
        cin >> item;
        totalPrice = item * 0.15;
        cout << totalPrice << endl;

        purchaseAmount++;
    } while (purchaseAmount < 3);

    return 0;
}
```

### OUTPUT OF THE CODE
#### Sample SInput
> 15000<br>
> 4000<br>
> 6700<br>

#### Sample Output
> 2250<br>
> 600<br>
> 1005<br>