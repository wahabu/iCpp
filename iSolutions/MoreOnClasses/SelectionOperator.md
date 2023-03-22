# Selection Operator

### PROBLEM

You are creating a program to manage smartphones. The given code declares a Phone class, wiht its its constructor and two methods: use() and getCharge().<br>
A Phone object is declared in main.

#### Task

Complete the code to call the getCharge() method using hte correct selection operator.

### CODE

```cpp
class Phone
{
    public:
        int charge;
        Phone() {
            charge = 100;
        }
        void use() {
            charge -=10;
        }
        void getCharge() {
            cout << charge;
        }
};

int main() {
    Phone p;
    p.use();
    Phone *ptr = &p;

    //call the getCharge() method on ptr
    ptr -> getCharge();
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> <br>

#### Sample Output

> <br>
