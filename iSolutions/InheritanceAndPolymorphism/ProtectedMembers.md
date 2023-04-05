# Title

### PROBLEM

text text text

#### Task

text text text

### CODE

```cpp
class Product
{
protected:
  double price;
  int weight;

public:
  void info()
  {
    cout << price << ", " << weight;
  }
};

class Fruit : public Product
{
public:
  string type;
  void setInfo(double p, int w)
  {
    price = p;
    weight = w;
  }
};

int main()
{
  Fruit obj;
  obj.type = "Apple";
  obj.setInfo(4.99, 10);
  obj.info();
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> <br>

#### Sample Output

> <br>
