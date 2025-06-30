## Lecture 9 - Constructor
* Constructor
* Constructor Overloading
* Parameterized Constructor
* Default Constructor
* Copy Constructor
### Constructor
* Constructor is a member function of a class.
* The name of the constructor is same as the name of the class
* It has no return type, so can't use return keyword.
* it must be an instance member function, that is, It can never be static
### How to call Constructor?
* Constructor is implicitly invoked when an object is created.
* Constructor is used to solve problem of initialization.
### What is problem of initialization?
* Why it is called Constructor?
* What is problem of initialization?
* How Constructor resolves this issue?
### Constructor Overloading
```c++
# include <iostream>
using namespace std;

class Complex {
    int a, b;
public:
    Complex(int x, int y) { // Parameterized Constructor
        a = x;
        b = y;
    }
    Complex(int k) { // Default Constructor
        a = k;
    }
    Complex();
};

int main(void) {
    Complex c1(3, 4), c2;
}
```
### Default Constructor
```c++
// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {

  private:
       double length;

   public:
    // create a constructor
    Wall() {

        // initialize private variables
        length = 5.5;

        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }
};

int main() {

    // create an object
    Wall wall1;

    return 0;
}
```
### Parameterized Constructor
```c++
// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall {
   private:
    double length;Lecture 18 Virtual Function in C++ Part 1 Hindi

    double height;

   public:
    // create parameterized constructor
    Wall(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
    }

    double calculateArea() {
        return length * height;
    }
};

int main() {
    // create object and initialize data members
    Wall wall1(10.5, 8.6);
    Wall wall2(8.5, 6.3);

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}
```
### Copy Constructor
```c++
#include <iostream>
using namespace std;

// declare a class
class Wall {
   private:
    double length;
    double height;

   public:

    // parameterized constructor
    Wall(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    Wall(Wall &obj) {
        // initialize private variables
        length = obj.length;
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {

    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // print area of wall1
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;

    // copy contents of wall1 to another object wall2
    Wall wall2 = wall1;

    // print area of wall2
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}
```