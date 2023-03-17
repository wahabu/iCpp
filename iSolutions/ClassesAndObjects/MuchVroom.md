# Title

### PROBLEM

text text text

#### Task

text text text

### CODE

```cpp
// class definition
class Car
{

  // private area
private:
  int horsepowers;

  // public area
public:
  // complete the setter function
  void setHorsepowers(int h)
  {
    if (h > 800)
    {
      cout << "Too much" << endl;
      horsepowers = h;
    }
    else
    {
      horsepowers = h;
    }
  }

  // complete the getter function
  int getHorsepowers()
  {
    return horsepowers;
  }
};

int main()
{
  // getting input
  int horsepowers;
  cin >> horsepowers;
  // creating the object of class Car
  Car car;
  // setting the value for private member
  car.setHorsepowers(horsepowers);
  // printing the value of private member
  cout << car.getHorsepowers();

  return 0;
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> <br>

#### Sample Output

> <br>
