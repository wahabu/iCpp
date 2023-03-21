# Example of Encapsulation

### PROBLEM

You are a supercar engineer and currently setting the engine's horsepower.
Complete the given program by completing methods to set and get the horsepower of the car object in order to output it.

#### Task

The program should warn "Too much" if the inputted horsepower is above 800.

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

> 950<br>

#### Sample Output

> Too much<br>
> 950<br>
