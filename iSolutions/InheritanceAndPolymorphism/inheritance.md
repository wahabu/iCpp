# Title

### PROBLEM

You are making a drawing application. The code you are given declares a Shape base class, and you are making separate classes for each shape that your application is going to support.

#### Task

Inherit the Rectangle class from the Shape class and call its draw() method.

### CODE

```cpp
class Shape
{
    public:
     //  Shape () {};
        void draw() {
            cout << "Drawing...";
        }
};
//inherit from Shape
class Rectangle: public Shape
{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h): width(w), height(h) {
            cout <<w<<"x"<<h<<endl;
        };
};

int main() {
    int x, y;
    cin>>x>>y;
    Rectangle d(x, y);
    //call the draw() method
    d.draw();
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 4<br>
> 12<br>

#### Sample Output

> 4x12<br>
> Drawing...<br>
