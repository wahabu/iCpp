# Destructors

### PROBLEM

You are making a game. The given code declares a Player class with a points member.

#### Task

You need to add the destructor to the Player class, which should print the remaining points when the program finishes execution.

### CODE

```cpp
class Player
{
  public:
    int points;
    Player(int x)
    {
        points = x;
        points %= 5;
    }
    //define the destructor
    ~Player();
};

Player::~Player(){
  cout << points << endl;
}

int main() {
  int points;
  cin >> points;
  Player obj(points);
}
```

### OUTPUT OF THE CODE

#### Sample SInput

> 233<br>

#### Sample Output

> 3<br>
