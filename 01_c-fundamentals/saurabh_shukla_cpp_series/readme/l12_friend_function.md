## Lecture 12 - Friend Function
### Friend Function
* Friend Function is not a member function of a class to which it is a firend
* Friend function is declared in the class with friend keyword
* It must be defined outside the class to which it is friend
* Friend function can access any member of the class to which it is friend
* Friend function cannot access members of the class directly.
* It has not caller object
* It should not be defined with memebership label
### Friend function example
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
    friend void fun(Complex);
}

void fun(Complex c) {
    cout << "Sum is " << c.a + c.b << endl
}

int main(void) {
    Complex c1, c2, c3;
    c1.set_data();
    fun(c1);
    return 0;
}
```

### Add Members of Two Different Classes with examples
* Friend function can become friend to more than one class.
```c++
// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    int numA = 5;
        
public:
    // friend function declaration
    friend int add(ClassA, ClassB);
};

class ClassB {
    int numB = 10;
public:
    // friend function declaration
    friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;

    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
```
### Overloading of binary operators as a friend function Example
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
    // overloading operator as friend function decleration
    friend Complex operator+(Complex, Complex);
};

// overloading operator as friend function defination
Complex operator+(Complex x, Complex y) {
    Complex temp;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}

int main(void) {
    Complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(5, 6);
    c3 = c1+c2; 
    // c3 = operator+(c1, c2);
    c3.show_data();
    return 0;
}
```
### Overloading of unary operators as a friend function Example
```cpp
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
    // overloading operator as friend function decleration
    friend Complex operator-(Complex);
};

// overloading operator as friend function defination
Complex operator-(Complex x) {
    Complex temp;
    temp.a = -x.a;
    temp.b = -x.b;
    return temp;
}

int main(void) {
    Complex c1, c2;
    c1.set_data(3, 4);
    c2 = -c1; 
    // c3 = operator-(c1);
    c2.show_data();
    return 0;
}
```
### Overloading of insertion and extraction operator
```cpp
// Overloading of insetion and Extraction opeators
#include <iostream>
using namespace std;

class Complex {
public:
int a, b;
    void set_data(int x, int y) {
        a = x;
        b = y;
    }
    void show_data() {
        cout << "a = " << a << " b = " << b << endl;
    }
    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream&, Complex&);
};

ostream& operator<<(ostream &dout, Complex c) {
    cout << "a = " << c.a << " b = ", c.b;
    return dout;
}
istream& operator>>(ostream &din, Complex &x) {
    cin >> x.a >> x.b;
    return din;
}

int main(void) {
    Complex c1;
    cout << "Enter a Complex number: ";
    cin >> c1; // operat>>(cin, c1);
    cout << "You enterd ";
    cout << c1; // operator<<(cout, c1);
    return 0;
}
```
### Member function of one class can become friend to another class
```cpp
#include <iostream>
using namespace std;

class A {
public:
    void fun() {
        .....
    }
    void foo() {
        .....
    }
};

class B {
    friend void A::fun();
    friend void A::foo();
}
```
### Friend Class
```cpp
#include <iostream>
using namespace std;

class A {
public:
    void fun() {
        .....
    }
    void foo() {
        .....
    }
};

class B {
    friend class A;
}
```
