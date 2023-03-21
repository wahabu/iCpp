# Default arguments

### PROBLEM

Your usual order at your favorite cafe is black tea, which the waiter brings you by default. Today, however, you are with your friend and it is his first time there. Obtain your friend's order in one word as input, and place the order for both of you.

#### Task

Complete the function so that it will output "Black tea" by default (without an argument) and then your friend's order as an argument.

### CODE

```cpp
void printOrder(string type) {

    cout << "Black tea\n" << type;
}

int main() {
    //getting coffee type
    string friendOrder;
    cin >> friendOrder;

    printOrder(friendOrder);

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> Water<br>

#### Sample Output

> Black tea<br>
> Water<br>
