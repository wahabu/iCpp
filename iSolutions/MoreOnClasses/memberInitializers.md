# Title

### PROBLEM

You are making a program to store TVs with their width and height.
The given program declares a TV class with height and width members, an area() method, as well as a constructor that initializes the members of the class.

#### Task

Complete the program by taking 2 integers as input, create a TV object by passing them to the constructor, and call the area() method.

### CODE

```cpp
class TV {
    public:
        TV(int h, int w): height(h), width(w) {};
        void area() {
            cout <<height*width;
        }
    private:
        int height;
        int width;
};

int main() {
   //your code goes here
   int h,w;
   cin >> h ;
   cin >> w;
   TV o(h, w);
   o.area();

}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 5<br>
> 6<br>

#### Sample Output

> 30<br>
