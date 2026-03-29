## Lecture 24 to 26 - Type Conversion
### Primitive type vs Non-Primitive type
* `int`, `char`, `float`, `double` are primitive types
* class type is any class you defined
### Primitive type to Primitive type
* conversion hapen automaticaly.
```c++
int x = 4;
float y;
y = x; // automatic type conversion

float y = 3.4;
int x;
x = y; // automatic type conversion
```
### Primitive type to class type
* Primitive type to class type can be implemented through constructor
```c++
#include <iostream>
using namespace std;

class Complex {
    int a, b;
public:
    Complex() {} //default constructor
    Complex(int k) {
        a = k;
        b = 0;
    }
    void set_data(int x, int y) {
        a = x;
        b = y;
    }
    void show_data() {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main(void) {
    Complex c1;
    int x = 5;
    c1 = x; // c1.Complex(x)
    c1.show_data(); // a = 5 b = 0

    return 0;

}
```
### Class type to Primitive type
* Class type to primitive type can be implemented wtih casting operator
```c++
#include <iostream>
using namespace std;

class Complex {
    int a, b;
public:
    void set_data(int x, int y) {
        a = x;
        b = y;
    }
    void show_data() {
        cout << "a = " << a << " b = " << b << endl;
    }
    operator int () { // casting operator
        return a;
    }
};

int main(void) {
    Complex c1;
    c1.set_data(3, 4);
    c1.show_data();
    int x;
    x = c1; // x = c1.operator int()
    cout << x << endl;
    return 0;
}   
```
### Class type to Class type
* Conversion through `constructor`
* Conversion through `casting operator`
```c++
#include <iostream>
using namespace std;

class Product {
    int m, n;
public:
    void set_data(int x, int y) {
        m = x;
        n = y;
    }
    int get_m() {
        return m;
    }
    int get_n() {
        return n;
    }
};

class Item {
    int a, b;
public:
    void show_date() {
        cout << "a = " << a << " b = " << b << endl;
    }
    Item () {} // constructor
    Item (Product c) {
        a = c.get_m();
        b = c.get_n();
    }
};

int main(void) {
    Item i1;
    Product p1;
    p1.set_data(3, 4);
    i1 = p1;
    i1.show_date();
    return 0;
}
```