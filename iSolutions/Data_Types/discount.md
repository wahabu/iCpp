# Title

### PROBLEM

You are given an array of doubles of items in a store that have different prices (see template).

#### Task

Write a program that takes the "percent off" discount as input and outputs discounted item prices on one line in the same sequence you are given, separated by a space (" ").

### CODE

```cpp
int main() {
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};

    	//length calculation
    int len = sizeof(items)/sizeof(items[0]);

    double percent_off; int user;
    cin>> user;

        //your code goes here
    for(int i=0; i < len; i++) {

    	percent_off = items[i] - (items[i]*user/100);
    	cout << percent_off << " ";

    }

    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 25<br>

#### Sample Output

> 375 9.3 70.5 33.75 2.25 60.75 750.675 63.75 67.5 0.75 26.25<br>
