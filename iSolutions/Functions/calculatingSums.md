# Function overloading

#### Task

Complete the add() function so that it will calculate the sum of two numbers given as arguments.
Overload it in order to do the same operation with double type values.

### CODE

```cpp
void add(int x, int y) {
    cout << x + y << endl;
}
//overload it to sum doubles
void add(double x, double y) {
    cout << x + y << endl;
}

int main() {

    //calling
    add(5,6);
    add(1.2, 6.5);

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample Output

> 11  
> 7.7
