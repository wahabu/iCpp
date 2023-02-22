# Variables

### PROBLEM

David and Alex each have aquariums. There are 8 Rainbowfishes in David’s aquarium, and 11 Angelfishes in Alex’s aquarium. Help them exchange their fishes between them.

Complete the code to __swap the values__ of variables between aquariumDavid and aquariumAlex. 

### CODE
```cpp
#include <iostream>
using namespace std;

int main() {
    int aquariumDavid = 8;
    int aquariumAlex = 11;

    // your code goes here
    int aquariumFree = aquariumDavid;
    aquariumDavid = aquariumAlex;
    aquariumAlex = aquariumFree;
    cout << "David's aquarium: " << aquariumDavid << endl;
    cout << "Alex's aquarium: " << aquariumAlex;
    return 0;
}
```

### OUTPUT OF THE CODE
> David's aquarium: 11<br>
> Alex's aquarium: 8<br>