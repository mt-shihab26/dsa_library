## Lecture 28 - Dynamic Constructor
* Constructor can allocate dynamically created memory to the object.
* Thus, object is going to use memory region, which is dynamically created by constructor
```c++
#include <iostream>
using namespace std;

class A {
    int a, b;
    int *p;
public:
    A() {

    }
    A(int x, int y, int z) {
        a = x;
        b = y;
        p = new int;
        *p = z;
    }
};

int main(void) {
    A o1, o3(3, 4, 5);
    
    return 0;
}
```