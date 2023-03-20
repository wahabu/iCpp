# Function with multiple parameter

### PROBLEM

While playing a board game, you and your friend roll the dice and the person who rolled the higher number moves forward.

#### Task

Write a function that takes two numbers as arguments and returns the higher number of the two.  
Print the result.  
If numbers are equal function must return that number.

### CODE

```cpp
int max(int num1, int num2) {
    //complete the function
    if (num1 > num2) {
    		return num1;
    } else {
    		return num2;
    }
}

int main() {
    //getting inputs
    int first;
    cin >> first;
    int second;
    cin >> second;

    //call the function and print result
    cout << max(first, second) << endl;

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 1<br>
> 6<br>

#### Sample Output

> 6<br>
