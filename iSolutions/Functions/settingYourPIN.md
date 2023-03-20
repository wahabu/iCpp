# The rand() function

### PROBLEM

You must set a PIN for your suitcase that contains 4 digits in the range of 0 to N.

#### Task

Write a program to take the N number as input, generate 4 random numbers from the range and print them sequentially, without spaces.

### CODE

```cpp
int main() {
    srand(0);
    int range;
    cin >> range;
    //your code goes here
    for (int i = 0; i <= 3; i++) {
        cout << ( 1 + (rand() % range));
    }

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 9<br>

#### Sample Output

> 2818<br>
