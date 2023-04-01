# Multi-Dimensional Arrays

### PROBLEM

You are given a two-dimensional array with 3 rows and 3 columns -- 9 elements.

#### Task

Complete the code to output **C++** .

### CODE

```cpp
int main() {

    string arr[3][3] = {
        {"Python", "JS", "C++"},
        {"PHP", "SQL", "Java"},
        {"C#", "Swift", "Kotlin"},
    };
    // your code goes here
    int k, j;
    for(k=0; k < 3; k++) {
    	for(j=0; j < 3; j++){
    		//cout << arr[k][j] << " ";
    		if (k==0 && j==2) {
    			cout << arr[k][j];
    		}
    	}
    }
    return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> No Input<br>

#### Sample Output

> C++<br>
