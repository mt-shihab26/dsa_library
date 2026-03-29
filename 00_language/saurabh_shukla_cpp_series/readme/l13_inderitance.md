## Lecture 13 - Inheritance
### Understand the need of Inheritance
* Class is used to describe properties and behaviour of an object.
* Property names and values
* Behaviour means actions
### Inheritance
* It is a proces of inheriting properties and behaviours of exsiting class into a new class.
* Existing class=old class=Parent class=Base class
* New class=Child class = Derived Class
### Syntax
```c++
class Base_Class {
    .......
    .......
};

class Derived_Class: Visibility_Mode Base_Class {
    .......
    .......
};
```
### Example
```c++
class Car {
    .......
    .......
};

class SportsCar: public Car {
    .......
    .......
};
```
### Types of Inheritance
1. Single Inheritance
```c++
class A {
    .......
    .......
};
```
1. Multilevel Inheritance
```c++
class A {
    .......
    .......
};

class B:public A {
    .......
    .......
};

class C:public B {
    .......
    .......
};
```
1. Multiple Inheritance
```c++
class A1 {
    .......
    .......
};

class A2 {
    .......
    .......
};

class B:public A1, public A2 {
    .......
    .......
};
```
1. Hierarchicale Inheritance
```c++
class A {
    .......
    .......
};

class B1:public A {
    .......
    .......
}

class B2:public A {
    .......
    .......
}
```
1. Hybrid Inheritance
### Visibility Modes
* Private
* Protected
* Public
* Types of users of a class
    1. User 1 will create Object of your class
    2. User 2 will derived class from your class
* Availability Vs Accessibility
### Visibility Modes Example
```c++
#include <iostream>
using namespace std;

class A {
    int a;
protected:
    void set_value(int k) {
        a = k;
    }
};

class B:public A {
public:
    void set_data(int x) {
        set_value(x);
    }
};

int main(void) {
    B obj;
    obj.set_data(4);
}
```
### Types of Association
* Aggregation
* Composition
* Inheritance
### Is-a relationship: Inheritanc
* Banana is a fruit
* Rectangle is a quadrilateral
* is a relationship is always implemented as a public inheritance.
