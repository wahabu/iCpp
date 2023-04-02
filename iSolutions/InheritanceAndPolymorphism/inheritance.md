# Title

### PROBLEM

text text text

#### Task

text text text

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

> <br>

#### Sample Output

> <br>
