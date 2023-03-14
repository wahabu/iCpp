# Passing arrays to functions

### PROBLEM

A local supermarket is running a promotion: each Nth customer will receive one item for free. Customers names are sequentially given as array of strings

#### Task

Write a function that receives the array of customers, its size, and the N number as arguments, and prints the names of the lucky customers each in a new line.

### CODE

```cpp
void winners(string customers[], int x, int n ) {
    for (int i=n-1; i <= x; i+=n) {
        cout << customers[i] << endl;
    }
}

int main() {

    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;
    //call function
    winners(customers, 13, n);

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> <br>

#### Sample Output

> <br>
