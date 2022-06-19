## Lecture 11 - Operator overloading
### Operator Overloading
* When and operator is overloaded with multiple jobs, it is known as operator overloading.
* It is a way to implement compile time polymorphism.
### Rules for Operator Overloading
* Any symbol can be used as function name
  * If it is a valid operator in C language
  * if it is preceded by operator keyword
* You can not overload `sizeof` and `?:` operator
### Binary operator overloading  Example:
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
          cout << "\na = " << a << " b " << b;
      }
      Complex operator +(Complex c) {
          Complex temp;
          temp.a = a + c.a;
          temp.b = b + c.b;
          return temp;
      }
  };
  
  int main(void) {
      Complex c1, c2, c3;
      c1.set_data(3, 4);
      c2.set_data(5, 6);
      c3 = c1 + c2; // We make new + operator dafinition
  //  c3 = c1.operator +(c2); // also we call this
      c3.show_data();
      return 0;
  }
  ```
### Unary operator overloading Example:
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
        cout << "a = " << a << " b = " << b << "\n";
    }
    Complex operator-() {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

int main(void) {
    Complex c1, c2;
    c1.set_data(3, 4);

    c2 = -c1;
    // c2 = c1.operator-();
    
    c2.show_data();

    return 0;
}
```
### Pre and Post increment operator overloading
```c++
#include <iostream>
using namespace std;

class Integer {
    int x;
public:
    void set_data(int a) {
        x = a;
    }
    void show_data() {
        cout << "x = " << x << endl;
    }
    Integer operator++() { //pre increment
        Integer temp;
        temp.x = ++x;
        return temp;
    }
    Integer operator++(int) { // post increment
        Integer temp;
        temp.x = x++;
        return temp;
    }
};

int main(void) {
    Integer i1, i2;
    i1.set_data(3);
    i1.show_data();
    i2 = i1++;
    i1.show_data();
    i2.show_data();
    i2 = ++i1;
    i1.show_data();
    i2.show_data();
}
```