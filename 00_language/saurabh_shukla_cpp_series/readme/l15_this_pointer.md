## Lecture 15 - this pointer
### Object Pointer
* A pointer contains address of and object is called Object pointer.
* Example
```c++
#include <iostream>
using namespace std;

class Box {
    int l, b, h;
public:
    void set_dimension(int x, int y, int z) {
        l = x;
        b = y;
        h = z;
    }
    void show_dimension() {
        cout << "l = " << l << " b = " << b << " h = " << h << endl;
    }
};

int main(void) {
    Box *p, small_box;
    p = &small_box;

    p->set_dimension(12, 10, 5);
    p->show_dimension();

    return 0;
}
```

### `this` pointer
* `this` is local object pointer in every instance member function containing address of the caller object.
* `this` pointer can not be modify.
* It is used to refer caller object in member function.
* Example
```c++
#include <iostream>
using namespace std;

class Box {
    int l, b, h;
public:
    void set_dimension(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void show_dimension() {
        cout << "l = " << l << " b = " << b << " h = " << h << endl;
    }
};

int main(void) {
    Box small_box;
    
    small_box.set_dimension(12, 10, 5);
    small_box.show_dimension();
    return 0;
}
```