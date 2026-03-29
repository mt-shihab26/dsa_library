## Lecture 18 - Virtual Function
### Base class Pointer
* Base class pointer can point to the object of any of its descendant class. But its converse is not true.
* Early binding
* Late binding
### Virtual Function Example
```c++
#include <stdio.h>
using namespace std;

class A {
public:
    virtual void f1() {
        .......
        .......
    }
};

class B : public A {
public:
    void f1() { // function overriding
        .......
        .......
    }
}

int main(void) {
    A *p, o1;
    B o2;
    p = &o2;
    p->f1(); // B

    return 0;
}
```
### Virtual function working concept
* `vptr` pointer variable
* `vtable` pointer array