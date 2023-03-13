# Title

### PROBLEM

text text text

#### Task

text text text

### CODE

```cpp
int recSum(int n) {
    //complete the function
    if (n == 1) {
        return 1;
    } else {
        return n + recSum(n -1);
    }
}

int main() {
    //getting input
    int n;
    cin >> n;

    //call the recursive function and print returned value
    cout << recSum(n);

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 5

#### Sample Output

> 15
