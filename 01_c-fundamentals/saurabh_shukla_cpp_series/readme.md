# [C++ by Saurabh Shukla](https://youtube.com/playlist?list=PLLYz8uHU480j37APNXBdPz7YzAi4XlQUF)

## [Lecture 01 - Introduction](/readme/l01-Introduction.md)

### Object Oriendted Programming Main Topic

-   Encapsulation
-   Data Hiding
-   Abstraction
-   Polymorphism
-   Inheritance

### Summary

-   Bjarne Stroustrup , 1979
-   C++ is a superset of C Language
-   C++ can implement POP as well as OOP
-   Concept of Classes and Object
-   Software Development process

## [Lecture 02 - Identifiers](/readme/l02-Indentifiers.md)

-   Constants
-   Variables
-   Keywords
-   Data Types

### Constants

-   Any in formation is constant
-   Data = information = constant
-   Types of Constants
    -   Primary
        -   integer `23, -341, 0, 5`
        -   Real `3.4, -0.06, 3.0`
        -   Character `'a', 'A', 'x', '2';`
    -   Secondary
        -   Array
        -   String
        -   Pointer
        -   Union
        -   Structure
        -   Enumerator
        -   Class

### Variables

-   Variables are the name of memory locations where we store data.
-   Variables name is any combination of alphabet (a to z or A ot Z), digit (0 to 9) and underscore (\_)
-   Valid variable name cannot start with digit

### Data Types

-   `int` <- Integer Constants
-   `char` <- Character Constants
-   `float` <- Real Constants
-   `double` <- Real Constants
-   `void`

## [Lecture 03 - Input Output](/readme/l03-Input-Output.md)

-   Output Instructuion
-   Input Instruction
-   About iostream.h

### Output Instructuion

-   in C, standard output device is monitor and `printf()` is use to send dat/massage to monitor.
-   `printf()` is a predefined function
-   In C++, we can use `cout` to send data/message to monitor.
-   `cout` is a prediefined object
-   The operator `<<` is called the insertion or put to operator
-   examples

    ```c++
    printf("Hello SCA");
    cout << "Hello SCA;

    printf("Sum of %d and %d is %d", a, b, c);
    cout << "Sum of " << a << " and " << b << "is" << c;

    printf("%d", a + b);
    cout << a + b;
    ```

### Input Instruction

-   In C, standard input device is keyboard and `scanf()` is use to receive data from keyboard
-   `scanf()` is a predefined function
-   In C++, we can use `cin` to input data from keyboard
-   The identifier `cin` is a predefined object is C++
-   The operator `>> ` is known as **extraction** or **get from** operator
-   examples:

    ```c++
    scanf("%d", &a);
    cin >> a;

    scanf("%d%d", &a, &b);
    cin >> a >> b;

    scanf("%d%f", &a, &f);
    cin >> a >> f;
    ```

### Header Files

-   According to the ANSI standards for C language, explicit declaration of function is recommended but not mandatory
-   ANSI standards for C++ language says explicit declaration of function is compulsory.
-   Predefined functions are declared in header files, so whenever you are using any predefined function in you code, you have to include specific header file that contains its declaration.

### About `iostream`

-   We need to include header file `iostream`, it contains declarations for the identifier `cout` and the operator `<<`. And also for the identifier `cin` and operator `>>`.
-   Header file contains declaration of identifiers
-   identifiers can be function names, variables, objects, Macros etc

### `endl`

-   Inserting `endl` into output stream causes the screen cursor to move to the beginning of the next line.examples
-   `endl` is a manipulator and it is declared in `iostream`
-   `'\n'` character also works as it works in C

## [Lecture 04 - Reference Variables](/readme/l04-Reference-Variable.md)

-   Reference Variable

### Reference Variable

-   Reference means address
-   Reference variable is an internal pointer
-   Declaration of Reference variable is preceded with `&` symbol (but do not read it as address of)
-   Reference variable must be initialized during declaration.
-   It can be initialized with already declared variables only
-   Reference variables can not be updated

### Example

```c++
#include<iostream>
using namespace std;

int main()
{
int x = 10;

// ref is a reference to x.
int &ref = x;

// Value of x is now changed to 20
ref = 20;
cout << "x = " << x << endl ;

// Value of x is now changed to 30
x = 30;
cout << "ref = " << ref << endl ;

return 0;
}

```

Output:

```bash
x = 20
ref = 30
```

## [Lecture 5 - Function](/readme/l05-Function.md)

-   What is Function?
-   Definition, Declaration and Call
-   Declaration
-   Ways to define a function
-   Formal and Actual Arguments
-   Types of formal arguments
-   Call by value, call by address and call by reference
-   Inline Function
-   Default Arguments
-   Function Overloading

### What is Function?

-   Function is block of code performing a unit task
-   Function has a name, return type and arguments.
-   Function is a way to achieve modularization
-   Functions are Predefined and user-defined
-   Predefined function are declared in header files and defined in library files.

### Declaration

-   Function declaration is also known as function prototype
-   Functions need to be declared before use (just like variables)
-   Functions can be declared locally or globally
-   ReturnType functionName(argumentList);
-   Function definition is a block of code

### Ways to define a Function?

-   Takes Nothing, Returns Nothing
-   Takes Something, Returns Nothing
-   Takes Nothing, Returns Something
-   Takes Something, Returns Something

### Types of Formal Arguments

-   formal arguments can be of three types
    -   Ordinary variables of any type
    -   Pointer variables
    -   Reference variables

### Call by Value

-   When formal arguments are ordinary variables, it is function call by value
-   Examples:

    ```c++
    #include <iostream>
    using namespace std;

    int sum(int, int);

    int main(void) {
        int a = 5, b = 6;
        int s = sum(a, b);
        cout << "Sum is " << s;
        return 0;
    }

    int sum(int x, int y) {
        return x + y;
    }
    ```

### Call by address

-   When formal arguments are pointer variables, is is function call by address
-   Examples:

    ```c++
    #include <iostream>
    using namespace std;

    int sum(int *, int *);

    int main(void) {
        int a = 5, b = 6;
        int s = sum(&a, &b);
        cout << "Sum is " << s;
        return 0;
    }

    int sum(int *p, int *q) {
        return x + y;
    }
    ```

### Call by Reference

-   When formal arguments are reference variables, it is function call by reference
-   Example:

    ```c++
    #include <iostream>
    using namespace std;

    int sum(int &, int &);

    int main(void) {
        int a = 5, b = 6;
        int s = sum(a, b);
        cout << "Sum is " << s;
        return 0;
    }

    int sum(int &x, int &y) {
        return x + y;
    }
    ```

### Benefits of Function

-   Easy to read
-   Easy to modify
-   Avoids rewriting of same code
-   Easy to debug
-   Better memory utilization
-   Function saves memory: Function is a program is to save memory space which becomes appreciable when a function is likely to be called many times.
-   Function is time consuming: However every time a function is called, it takes lot of extra time in executing a series of instructions for tasks such as jumping to the functions, saving register, pushing arguments into the stack and returning to the calling function.
-   So when function is small it is worthless to spend so much extra time in such tasks in cost of saving comparatively small space.

### Inline Function

-   To eliminate the cost of calls to small functions, C++ proposes a new feature called inline function
-   An inline function is a function that is expanded in line when it invoked.
-   Compiler replaces the function call with the corresponding function code.
-   `inline` is a request not a command
-   The benefit of speed of inline functions reduces as the function grows in size.
-   So the compiler may ignore the request in some situations. Few of them:
    -   Function containing `loops`, `switch`, `goto`
    -   Function with recursion
    -   Containing static variable.
-   Example:

    ```c++
    #include <iostream>
    using namespace std;

    inline void fun();

    int main(void) {
        cout << "You are in main" << endl;
        fun();
        return 0;
    }

    void fun() {
        cout << "You are in fun" << endl;
    }
    ```

### Default Arguments

-   Examples

    ```c++
    #include <iostream>
    using namespace std;

    int add(int , int, int = 0);

    int main(void) {
        int a, b;
        cout << "Enter two number: ";
        cin >> a >> b;
        cout << "Sum is: " << add (a, b) << endl;
        int c;
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
        cout << "Sum is " << add(a, b, c) << endl;
     	return 0;
    }

    int add(int x, int y, int z) {
        return x + y + z;
    }
    ```

### Function Overloading

-   Example:

    ```c++
    #include <iostream>
    using namespace std;

    int area(int, int);
    float area(int);

    int main(void) {
        int r;
        cout << "Enter radius of a circle: ";
        cin >> r;
        float A = area(r);
        cout << "Area of Circle is " << A << endl;
        int l, b, a;
        cout << "Enter length and breadth of rectangle: ";
        cin >> l  >> b;
        a = area(l, b);
        cout << "Area of Rectangle is " << a;
        return 0;
    }

    float area(int R) {
        return 3.1416 * R * R;
    }

    int area(int L, int B) {
        return L*B;
    }
    ```

-   How Function Overloading is Resolved?
    -   First, C++ tries to find an exact match. This is the case where the actual argument exactly matches the parameter type of one of the overloaded functions.
    -   if no exact match is found, C++ tries to fund a match through promotion
        -   `char`, `unsigned char` and `short` is promoted to and `int`.
        -   `float` is promoted to `double`
    -   If no promotion is found, C++ tries to find a match through standard conversion.

## [Lecture 6 - Structure](/readme/l06-Structure.md)

### Structure in C

-   There are 3 important point
    -   Structure is collection of dissimilar elements
    -   Structure is a way to group variables
    -   Structure is used to create data type
-   First: difference between C and C++ is In C++, we do not need to use ‘struct’ keyword for declaring variables.
-   Secend: Structures in C++ can hold member functions with member variables.
-   Third: The data hiding feature is present in C++ structures.

## [Lecture 7 - Classes and Objects](/readme/l07-Classes-and-Objects.md)

### Class and Structure

-   The only difference between structure and class is that,
    -   the members of structures are by default public and
    -   the members of class are by default private.
-   Example:

    ```c++
    #include <iostream>
    using namespace std;

    class Complex {
        int a, b;

    public:
        void set_data(int, int);
        void show_data() {
            cout << "a = " << a << " b = " << b << endl;
        }
    };

    void Complex::set_data(int x, int y) {
        a = x;
        b = y;
    }

    int main(void) {
        Complex c1;
        c1.set_data(3, 4);
        c1.show_data();
        return 0;
    }
    ```

-   Examples 02

    ```c++
    #include <iostream>
    using namespace std;

    class Complex {
        int a, b;

    public:
        void set_data(int x, int y) {
            a = x; b = y;
        }
        void show_data() {
            cout << "a = " << a << " b = " << b << endl;
        }
        Complex add (Complex c) {
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
        c3 = c1.add(c2);
        c3.show_data();
        return 0;
    }
    ```

### Techniacl jargonns

-   Class is a description of an object
-   Object is and instance of a class
-   Instance member variable also called
    -   Attributes, data members, fields, properties
-   Instance member functions also called
    -   Methods, procedures, actions, operations, services

## [Lecture 8 - Static Members](/readme/l08-Static-Members.md)

-   Static local variables
-   Static member variables
-   Static Member Functions

### Static Local variables

-   Concept as it is taken from C
-   They are by default initialized to zero
-   Their lifetime is throughout the program

### Static Member variable

-   Declared inside the class body
-   Also known as class member variable
-   They must be defined outside the class
-   Static member variable does not belong to any object, but to the whole class.
-   There will be only one copy of static member variable for the whole class
-   Any object can use the same copy of class variable
-   They can also be used with class name
-   Examples:

    ```c++
    #include <iostream>
    using namespace std;

    class Account {
        int balance; // Instance Member variable
        static float roi; // Static Member variable or Class Variable
    public:
        void set_balance(int b) {
            balance = b;
        }
    };
    float Account::roi = 3.5;

    int main(void) {
        Account a1, a2;

        return 0;
    }
    ```

### Static Member Function

-   They are qualified with the keyword `static`
-   They are also called class member functions
-   They can be invoked with or without object
-   They can only access static member of the class
-   Example:

    ```c++
    #include <iostream>
    using namespace std;

    class Account {
        int balance; // Instance Member variable
        static float roi; // Static Memberr variable
    public:
        void set_balance(int b) {
            balance = b;
        }
        static void set_roi(float r) { // Static Member Function
            roi = r;
        }
    };

    float Account::roi = 3.5;

    int main(void) {
        Account a1, a2;
        Account::set_roi(4.5);
    }
    ```

## [Lecture 9 - Constructor](/readme/l09-Constructor.md)

-   Constructor
-   Constructor Overloading
-   Parameterized Constructor
-   Default Constructor
-   Copy Constructor

### Constructor

-   Constructor is a member function of a class.
-   The name of the constructor is same as the name of the class
-   It has no return type, so can't use return keyword.
-   it must be an instance member function, that is, It can never be static

### How to call Constructor?

-   Constructor is implicitly invoked when an object is created.
-   Constructor is used to solve problem of initialization.

### What is problem of initialization?

-   Why it is called Constructor?
-   What is problem of initialization?
-   How Constructor resolves this issue?

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

## [Lecture 10 - Destructor](/readme/l10-Destructor.md)

-   Destructor

### Destructor

-   Destructor is an instance member function of a class
-   The name of the destructor is same as the name of a class but preceded by tilde(~) sumbol
-   Destructors can never be static
-   Destructor has no return type
-   Destructor takes not argument (No overloading is possible)
-   It is invoked implicitly when object is going to destroy.

### Why destructor?

-   it should be defined to release resources allocated to and object.
-   Examples:

    ```c++
    #include <iostream>
    using namespace std;

    class Complex {
        int a, b;
    public:
        ~Complex() {
            cout << "Runed Destructor\n";
        }
    };

    void fun() {
        Complex obj;
    }

    int main(void) {
        fun();
        return 0;
    }
    ```

## [Lecture 11 - Operator overloading](/readme/l11-Operator-Overloading.md)

### Operator Overloading

-   When and operator is overloaded with multiple jobs, it is known as operator overloading.
-   It is a way to implement compile time polymorphism.

### Rules for Operator Overloading

-   Any symbol can be used as function name
    -   If it is a valid operator in C language
    -   if it is preceded by operator keyword
-   You can not overload `sizeof` and `?:` operator

### Binary operator overloading Example:

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

## [Lecture 12 - Friend Function](/readme/l12-Friend-Function.md)

### Friend Function

-   Friend Function is not a member function of a class to which it is a firend
-   Friend function is declared in the class with friend keyword
-   It must be defined outside the class to which it is friend
-   Friend function can access any member of the class to which it is friend
-   Friend function cannot access members of the class directly.
-   It has not caller object
-   It should not be defined with memebership label

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

-   Friend function can become friend to more than one class.

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

## [Lecture 13 - Inheritance](/readme/l13-Inderitance.md)

### Understand the need of Inheritance

-   Class is used to describe properties and behaviour of an object.
-   Property names and values
-   Behaviour means actions

### Inheritance

-   It is a proces of inheriting properties and behaviours of exsiting class into a new class.
-   Existing class=old class=Parent class=Base class
-   New class=Child class = Derived Class

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

-   Private
-   Protected
-   Public
-   Types of users of a class
    1. User 1 will create Object of your class
    2. User 2 will derived class from your class
-   Availability Vs Accessibility

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

-   Aggregation
-   Composition
-   Inheritance

### Is-a relationship: Inheritanc

-   Banana is a fruit
-   Rectangle is a quadrilateral
-   is a relationship is always implemented as a public inheritance.

## [Lecture 14 - Constructor and Destructor in Inheritance](/readme/l14-Constructor-and-Destructor-in-Inheritance.md)

### Constructor in Inheritance Example

```c++
#include <iostream>
using namespace std;

class A {
    int a;
public:
    A(int k) {
        a = k;
    }
}

class B: public A {
    int b;
public:
    B(int x, int y):A(x) {
        b = y;
    }
}

int main(void) {
    B obj(2, 3);
}
```

## [Lecture 15 - this pointer](/readme/l15-this-pointer.md)

### Object Pointer

-   A pointer contains address of and object is called Object pointer.
-   Example

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

-   `this` is local object pointer in every instance member function containing address of the caller object.
-   `this` pointer can not be modify.
-   It is used to refer caller object in member function.
-   Example

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

## [Lecture 16 - new and delete](/readme/l16-new-and-delete.md)

### SMA vs DMA

-   SMA: Static Memory Allocation
    -   Examples
    ```c++
    int x;
    float y;
    Complex c2;
    Student s1;
    ```
-   DMA: Dynamic memory Allocation

### `new`

```c++
int *p = new int;
float *q = new float;
Complex *ptr = new Complex;
float *q = new float[5]

int x;
cin >> x;
int *p = new int[x];
```

### `delete`

```c++
delete p;
delete []p;
```

## [Lecture 17 - Method Overriding](/readme/l17-Method-Overriding.md)

-   Method Overriding
-   Method Hiding
-   Example

    ```c++
    #include <iostream>
    using namespace std;

    class A {
    public:
        void f1() {
            ......
            ......
        }
        void f2() {
            ......
            ......
        }
    };

    class B:public A {
        void f1() { // Method Overriding
            ......
            ......
        }
        void f2() { // Method Hiding
            ......
            ......
        }
    };

    int main(void) {
        B obj;
        obj.f1(); // B
        obj.f2(); // error
        obj.f2(); // B
    }
    ```

## [Lecture 18 - Virtual Function](/readme/l18-Virtual-Function.md)

### Base class Pointer

-   Base class pointer can point to the object of any of its descendant class. But its converse is not true.
-   Early binding
-   Late binding

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

-   `vptr` pointer variable
-   `vtable` pointer array

## [Lecture 19 - Abstract Class](/readme/l19-Abstract-Class.md)

### Pure Virtual Function

-   A do nothing function is pure virtual function

```c++
#include<iostream>
using namespace std;

class Base
{
int x;
public:
	virtual void fun() = 0; // pure virtual function
	int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived: public Base
{
	int y;
public:
	void fun() { cout << "fun() called"; }
};

int main(void)
{
	Derived d;
	d.fun();
	return 0;
}
```

### Abstract class

-   A class containing pure virtual function is an abstract class
-   We can not instantiate abstract class

## [Lecture 20 - Template](/readme/l20-Template.md)

-   Function Template
-   Class Template

### Template

-   The keyword template is used to define functionn template and class template
-   It is a way to make your function or class generalize as far as data type is concern.

### Function Template

-   Function template is also known as generic function
-   Syntax `template <typename Type> Type func_name(type argc1, ...)` or `template <class Type> Type func_name(type argc1, ...)`
-   Example

    ```c++
    #include <iostream>
    using namespace std;

    template <typename T>
    T add(T num1, T num2) {
        return (num1 + num2);
    }

    int main() {
        int result1;
        double result2;
        // calling with int parameters
        result1 = add<int>(2, 3);
        cout << "2 + 3 = " << result1 << endl;

        // calling with double parameters
        result2 = add<double>(2.2, 3.3);
        cout << "2.2 + 3.3 = " << result2 << endl;

        return 0;
    }
    ```

### Class Template

-   Class Template is also known as generic class
-   Syntax `template <typename Type> class class_name() {....};` or `template <class Type> class class_name() {....};`
-   Example

    ```c++
    #include <iostream>
    using namespace std;

    template <typename T>
    class Array {
    private:
        T *ptr;
        int size;
    public:
        Array(T arr[], int s);
        void print();
    };

    template <typename T>
    Array<T>::Array(T arr[], int s) {
        ptr = new T[s];
        size = s;
        for(int i = 0; i < size; i++)
            ptr[i] = arr[i];
    }

    template <typename T>
    void Array<T>::print() {
        for (int i = 0; i < size; i++)
            cout<<" "<<*(ptr + i);
        cout<<endl;
    }

    int main() {
        int arr[5] = {1, 2, 3, 4, 5};
        Array<int> a(arr, 5);
        a.print();
        return 0;
    }
    ```

## [Lecture 21 - File Handling](/readme/l21-File-Handling.md)

### Streams

![streams img 1](img/img01-streams.png)
![streams img 2](img/img02-streams.png)

### File Writing

```c++
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("myfile.txt");
    string text = "The quick brown fox jumps over the lazy dog";

    file << text << endl;

    file.close();

    return 0;
}
```

### Where to write modes?

-   As a second argument of open() function.
-   `fout.open("file_name", file_opening_mode | file_opening_mode);`

### Text mode vs binary mode

-   Text mode is the default opening mode
-   Binary mode can be specified wit hios::binary

### tellg() and tellp() function

-   tellg()

    ```c++
    // C++ program to illustrate the
    // use of tellg()
    #include <fstream>
    #include <iostream>
    using namespace std;

    // Driver Code
    int main()
    {
        ifstream fin;
        char ch;

        // Opens the existing file
        fin.open("gfg.txt");

        int pos;
        pos = fin.tellg();
        cout << pos;

        fin >> ch;
        pos = fin.tellg();
        cout << pos;

        fin >> ch;
        pos = fin.tellg();
        cout << pos;

        return 0;
    }

    ```

-   tellp

    ```c++
    // C++ program illustrating the
    // use of tellp()
    #include <fstream>
    #include <iostream>
    using namespace std;

    // Driver Code
    int main()
    {
        ofstream fout;
        char ch;

        // Opening the already existing file
        fout.open("gfg.txt", ios::app);
        int pos;
        pos = fout.tellp();
        cout << pos;

        fout << "print it";
        pos = fout.tellp();
        cout << pos;
        fout.close();

        return 0;
    }
    ```

### seekg and seekp functions

-   Defined in istream class
-   Its prototype is
    -   `istream &seekg(streampos pos);`
    -   `istream &seekg(streamof of, ios_base::seekdir_way);`
-   **pos** is new absolute position within the stream (relative to the beginning).
-   **off** is offset value, relative to the way parameter.
-   **way** value `ios_base::beg`, `ios_base::cur` and `ios_base::end`

```c++
#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    ifstream fin;
    fin.open("abc.txt");
    cout << fin.tellg();
    cout << endl << (char) fin.get();
    cout << endl << fin.tellg();
    fin.seekg(6);
    cout << endl << fin.tellg();
    cout << endl << (char) fin.get();
    cout << endl << fin.tellg();
    fin.seekg(2, ios_base::cur);
    cout << endl << fin.tellg();
}
```

-   Defined in ostream class
-   Its prototype is
    -   `ostream &seekp(streampos pos);`
    -   `ostream &seekp(streamof of, ios_base::seekdir_way);`
-   **pos** is new absolute position within the stream (relative to the beginning).
-   **off** is offset value, relative to the way parameter.
-   **way** value `ios_base::beg`, `ios_base::cur` and `ios_base::end`

## [Lecture 22 - Initializers](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l22-Initializers.md)

-   Initializer List is used to initialize data members of a class
-   The list of members to be initialized is indicated with constructor as a comma sparated list followed by a colon.
-   Example

    ```c++
    #include <iostream>
    using namespace std;

    class Dummy {
        int a, b;
        const int x;
        int &y;
    public:
        Dummy(int &n):x(5), y() { // initializes
            a = 10;
        }

    }

    int main(void) {
        int m = 6;
        Dummy d1(m);
        return 0;
    }
    ```

-   There are situations where initialization of data members inside constructor doesn't work and initializer List must be used.
    -   For initialization of non-static `const` data members
    -   For initialization of reference members

## [Lecture 23 - Deep Copy and Shallow Copy](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l23-Deep-Copy-and-Shallow-Copy.md)

### Shallow Copy

-   Creating copy of object by copying data of all member variables as it is.

### Deep Copy

-   Creatin an object by copying data of another objct along with the values of memory resources resides outside the object but handled by that objact.

## [Lecture 24 to 26 - Type Conversion](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l24-26-Type-Conversion.md)

### Primitive type vs Non-Primitive type

-   `int`, `char`, `float`, `double` are primitive types
-   class type is any class you defined

### Primitive type to Primitive type

-   conversion hapen automaticaly.

```c++
int x = 4;
float y;
y = x; // automatic type conversion

float y = 3.4;
int x;
x = y; // automatic type conversion
```

### Primitive type to class type

-   Primitive type to class type can be implemented through constructor

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

-   Class type to primitive type can be implemented wtih casting operator

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

-   Conversion through `constructor`
-   Conversion through `casting operator`

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

## [Lecture 27 - Exception Handling](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l27-Exception-Handling.md)

### Exceptions

-   Exception is any abnormal behaviour, run time error.
-   Exceptions are off beat situation in your program where your program should be ready to handle it with appropriate response.

### Exceptions Handiling

-   C++ provides a built-in error handiling mechanism tha is called exception handling.
-   Using exception handling, you can more easily manage and respond to runtime errors.

### `try`, `catch`, `throw`

-   Program statements that you want to monitor for exceptions are contained in a `try` block.
-   If any exception occurs with try block, it is thrown (using `throw`).
-   The exception is caught, using `catch`, and processed.

### Syntac

```c++
try {
    ......
}
catch (type1 arg) {
    ......
}
catch (type1 arg) {
    ......
}
.....
catch (typeN arg) {
    ......
}
```

### `catch`

-   When an exceptiion is caught, arg will receive its value.
-   If you don't need access to the exception itself, specify only type in the catch clause - arg is optional.
-   Any type of data can be caught, including classes that you create.

### `throw`

-   The general form of the throw statement is: throe exception;
-   Throw must be executed either witin the try block proper or frome any function that the code witin the block calls.

## [Lecture 28 - Dynamic Constructor](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l28-Dynamic-Constructor.md)

-   Constructor can allocate dynamically created memory to the object.
-   Thus, object is going to use memory region, which is dynamically created by constructor

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

## [Lecture 29 - namespace](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l29-Namespace.md)

### namespace

-   Namespace is a container for identifiers
-   It puts the names of its members in a distinct space so that they don't confilict with the names in other namespaces or global namespace.

### How to create nameapace?

```c++
namespace MySpace {
    // Declarations
}
```

-   Namespace definition doesn't terminates with a semicolon likne in class definition.
-   The namespace definition must be done at global scope, or nested inside another namespace.
-   You can use an alias name for your namespace name, for ease of use. `namespace ms = Myspace;`

### Remember

-   Namespace is not a cloas, you cannot create instance of namespace.

### Unnamed namespaces

-   There con be unnamed namespaces too.

```c++
namespace {
    // declarations
}
```

### namespaces can be extended

-   A namespace definition can be continued and extended ober multiple files, they are not redefined or overridden.

### Accessing members of namespace

-   Any name (identifier) declared in a namespace can be explicitly specified using the namespac's name and the scope resolution operator `::` with the identifier.

```c++
#include <iostream>

namespace Myspace {
    int a;
    int f1();
    class A {
        int a, b;
    public:
         void fun1();
    };
}

int Myspace::f1() {
    std::cout << "Hello f1" << std::endl;
    return 0;
}

void Myspace::A::fun1() {
    std::cout << "Hello A::fun1" << std::endl;
}

int main(void) {
    Myspace::a = 5;
    Myspace::f1();
    Myspace::A obj;
    obj.fun1();

    return 0;
}
```

### The `using` directive

-   `using` keyword allows you to import an entire namespace into your program with a global scope.
-   It can be used to import a namespace into another namespace or any program.

```c++
#include <iostream>
using namespace std;

namespace Myspace {
    int a;
    int f1();
    class A {
        int a, b;
    public:
         void fun1();
    };
}

using namespace Myspace;

int Myspace::f1() {
    cout << "Hello f1" << endl;
    return 0;
}

void Myspace::A::fun1() {
    std::cout << "Hello A::fun1" << endl;
}

int main(void) {
    a = 5;
    f1();
    A obj;
    obj.fun1();

    return 0;
}
```

## [Lecture 30 - Virtual Destructor](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l30-Virtual-Destructor.md)

-   What is destructor?
-   Why should use destructor?
-   new and delete
-   Base pointer can pointer to the object of derived class.

## [Lecture 31 - Nested Class](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l31-Nested-Class.md)

-   Class insite a class is called nested class.
-   An nested class is a member and as such has the same access rights as any other member.
-   The members of an enclosing class have no special access to members of a nested class the usual access rules shall be obeyed.

```c++
#include <iostream>
#include <string.h>
using namespace std;

class Student {
    int roll_no;
    char name[20];
    class Address {
        int house_no;
        char stareet[20];
        char city[20];
        char state[20];
        char pincode[7];
    public:
        void set_address_A(int h, char *s, char *c, char *st, char *p) {
            house_no = h;
            strcpy(stareet, s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
        }
        void show_address() {
            cout << house_no << endl;
            cout << stareet << endl;
            cout << pincode << endl;
            cout << state << endl;
        }
    };
    Address add;

public:
    void set_rool_no(int r) {
        roll_no = r;
    }
    void set_name(char *n) {
        strcpy(name, n);
    }
    void set_address_S(int h, char *s, char *c, char *st, char *p) {
        add.set_address_A(h, s, c, st, p);
    }
    void show_student() {
        cout << "Student Data" << endl;
        cout << roll_no << " ";
        cout << name << " ";
        add.show_address();
    }
};

int main(void) {
    Student s1;
    s1.set_rool_no(100);
    s1.set_name("Rahul");
    s1.set_address_S(301, "hanuma goli", "bhopal", "2342342", "MP");
    s1.show_student();

    return 0;
}
```

## [Lecture 32 - Introduction to STL](/readme/l32-Introduction-to-STL.md)

-   STL is Standard Template Library
-   It is a powerful set of C++ template classes
-   At the core of the C++ Standard Template Library are following four well-structured components
    -   Containers
    -   Iterators
    -   Algorithms
    -   Functions

### Containers

-   Containers are used to manage collections of objects of a certain kind.
-   Conatiner library in STL provide containers that used to create datat structures like arrays, linked list, trees etc.
-   These container are generic, they can hold elements of any data types.

### Algorithms

-   Algorithms act on containers. They provide the means by which you will perform initialization, sorting, searching and transforming of the contents of containers.
-   Algorithms library cotains built in functions that performs complex algorithms on the data structures.
-   Algoritm library provides abstraction, i.e you don't necessarily need to know how the algoritms works.

### Iterators

-   Iterators are used to step through the elements of collection of objects. These collection my be containers or subsets of containers.
-   Iterators is STL are used to point to the cotainers
-   Iterators actually acts as a bridge betweeen containers and algorithms.

## [Lecture 33 - STL Containers](/readme/l32-Introduction-to-STL.md)

-   Container library is a collection of classes
-   The containers are implemented as generic class templates.
-   Containers help us to implement and replicate simple and complex data structurs very easily like arrays, list, trees, associative arrays and many more.
-   Containers con be used to hold different kind of objects.

### Common Containers

-   `vector`: replicates arrays
-   `queue` : replicates queues
-   `stack` : replicates stack
-   `priority_queue`: replicates heaps
-   `list`: replicates linked list
-   `set` : replicates trees
-   `map` : associative arrays

### Classifications of containers

-   Sequence Containers
    -   `array`, `linked list` etc
-   Asscociative Containers
    -   Soted Data structure like `map`, `set` etc
-   Unordered Accociative containers
    -   Unsorted Data sturcture
-   Containers Adapters
    -   Interfaces to sequence containers

## [Lecture 34 - Array in STL](/readme/l34-array-in-STL.md)

-   Array is a linear collection of similar elements.
-   Array container is STL provides use the implementation of static array
-   Use Header array `#include <array>`

### Creating array objects

-   `array <object_type, array_size> array_name;`
-   It creates an empty array of object_type with maximum size of array_size.

### Assignment of value during declaration

-   `arra <int, 4)> add_numbers = {2, 4, 6, 8};`

### Member functions

-   Following are the important and most used member function of array templeate
-   `at()`
-   `[]` operator
-   `front()`
-   `back()`
-   `fill()`
-   `swap()`
-   `size()`
-   `begin()`
-   `end()`

### `array.at()`

-   This method returns value in the array at the given range
-   if the given range is greadter than the array size, out_of_range exception is thrown

### `[]` operator

-   The use of operato `[]` is same as it was for nomal arrays

### `array.front()` and `array.back()`

-   `array.front()` method return the first element in the array.
-   `array.back()` method returns the last element in the array.

### `array.fill()`

-   This method assigns the given value to every element of the array.

### `swap()`

-   This method swaps the content of two arrays of smae type and same size.
-   It swaps index wise, thus element of index i of first array will be swapped with the element of index i of the second array.
-   `first_array.swap(second_array)`

### `array.size()`

-   This method reutrns the number of element present in the array.

### `array.begin()` and `array.end()`

-   `array.begin() method returns the iterator pointing to the first element of the array.
-   `array.end()` method returns an iterator pointing to an element next to the last element in the array.

## [Lecture 35 - pair in STL](/readme/l35-pair-in-STL.md)

-   pair is a template class in Standared Template Library
-   pair is not a part of container

```c++
#include <iostream>
using namespace std;

class student {
    string name;
    int age;

public:
    void set_student(string s, int a) {
        name = s;
        age = a;
    }
    void show_student() {
        cout << "Name: " << name;
        cout << " Age: " << age << endl;
    }
};

int main(void) {
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;
    pair<int, student> p4;

    p1 = make_pair("Rahul", 16);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Drilling C++ STL", 432.3);
    student s1;
    s1.set_student("Shihab", 19);
    p4 = make_pair(1, s1);

    cout << "Pair 1: ";
    cout << p1.first << " " << p1.second << endl;
    cout << "Pair 2: ";
    cout << p2.first << " " << p2.second << endl;
    cout << "Pair 3: ";
    cout << p3.first << " " << p3.second << endl;

    cout << "Pair 4: ";
    cout << p4.first << " ";
    student s2 = p4.second;
    s2.show_student();
}
```

## [Lecture 36 - Tuple in STL](/readme/l36-Tuple-in-STL.md)

-   Just linke in pair, we can pair two heterogeneous objects, in tuple we can pair multiple objects.

```c++
#include <iostream>
#include <tuple>
using namespace std;

int main(void) {
    tuple <string, int, int, int> t1;
    t1 = make_tuple("Shihab", 23, 324, 23);

    cout << get<0>(t1) << " ";
    cout << get<1>(t1) << " ";
    cout << get<2>(t1) << " ";
    cout << get<3>(t1) << endl;

    return 0;
}
```

## [Lecture 37 - Vector Class in STL](/readme/l37-Vector-in-STL.md)

-   The most general purpose container is the Vector
-   It supports a Dynamic array
-   Vector beging a Dynamic array, doesn't needs size during declaration
-   Code will create a blank vector `vector <int> v1`

### Initialize during declaration

-   Zero length vector

```c++
vector <int> v1;
```

-   Creates a 5 element char vector

```c++
vector <char> cv(5);
```

-   Initializes 4 element char vector with 'a'

```c++
vector <char> cv(4, 'a');
```

-   Initializes spacefic value

```c++
vector <string> v {"Shihab", "Shawon"};
```

### Subscrpt operator`[]`

-   Subscript operator is also defined for vector.

```c++
vector <int> v {10, 30};
cout << v[1] << endl;
// Output: 30
```

### `push_back()`

-   `push_back()` is a member function, which can be used to add value to the vector at the end.

```c++
vector <int> v;
v.push_back(10);
cout << v[0] << endl;
// Output: 10
```

### `pop_back()`

-   It removes the last element

```c++
vector <int> v {10, 20, 30, 40};

v.pop_back();

for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
cout << endl;
// Output: 10 20 30
```

### `capacity()`

-   It returns the capacity of the vector
-   This is the number of element it can hold before it will need to allocate more memory.

### `size()`

-   It returns the number of elements currently in the vector

### `clear()`

-   It removes all elements from the vector

### `insert()`

```c++
vector <int> v {10, 20, 30, 40, 50};

for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
cout << endl;

vector <int>::iterator it=v.begin();

v.insert(it+2, 25);
for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
cout << endl;
```

## [Lecture 38 List class in STL](/readme/l38-List-in-STL.md)

-   List class supports a bidirectional, linear list.
-   Vector supports random access but a list can be accessed sequentially only.
-   List can be accessed front to back or back to front.

### Useful functions of list class

-   `sort()`
-   `size()`
-   `push_back()`
-   `push_front()`
-   `pop_back()`
-   `pop_front()`
-   `reverse()`
-   `remove()`
-   `clear()`

## [Lecture 39 map class in STL](/readme/l39-map-in-STL.md)

-   Maps are used to replicate associative arrays
-   Maps contain sorted key-value pair, in which each key in unipue and connot be changed, and it can be inserted or deleted but cannot be altered.

### Useful functions of map class

-   `at()`
-   `[]`
-   `size()`
-   `empty()`
-   `insert()`
-   `clear()`

## [Lecture 40 string class](/readme/l40-string-in-STL.md)

### Traditional way

-   Using null-terminated characteer arrays are not technically data types
-   So, C++ operators cnnot be applied to them
-   `char s1[10];

### string class

-   The string class is a specialization of a more general template class basic_string
-   Since defining class in C++ is creating a new data type, string is derived data type.
-   This means operatos can be overloaded for the class

### string is safe then char array

-   Careless programmer can overrun the en of an array that holds a null terminated string.
-   strign class hanldes such issues

### string is in STL

-   string is an onohter container class
-   To use string class, you have to include string header. `#include <string>`

### string class Constructors

-   string class supports many constructor, some ot them are
    -   `string()`
    -   `string(const char *str)`
    -   `string(const string &str)`

### operators supports

-   `=` Assignment
-   `+` Concatenation
-   `+=` Concatenation assignment
-   `==` Equality
-   `!=` Inerquality
-   `<` Less than
-   `<=` Less than or equal
-   `>` Greater than
-   `>=` Greater than or equal
-   `[]` Subscripting

### Insertion and Extraction

-   `<<` Insertion (for output)
-   `>>` Extraction (for input)

### Mixed operations

-   You can mix string objects with another string object or c style string
-   C++ string can also be concatenated with charctre constant

### Useful methods

-   `assign()`
-   `append()`
-   `insert()`
-   `replace()`
-   `erase()`
-   `find()`
-   `rfind()`
-   `compare()`
-   `c_str()`
-   `size()`
