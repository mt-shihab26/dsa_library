## Lecture 5 - Function
* What is Function?
* Definition, Declaration and Call
* Declaration
* Ways to define a function
* Formal and Actual Arguments
* Types of formal arguments
* Call by value, call by address and call by reference
* Inline Function
* Default Arguments
* Function Overloading
### What is Function?
* Function is block of code performing a unit task
* Function has a name, return type and arguments.
* Function is a way to achieve modularization
* Functions are Predefined and user-defined
* Predefined function are declared in header files and defined in library files.
### Declaration
* Function declaration is also known as function prototype
* Functions need to be declared before use (just like variables)
* Functions can be declared locally or globally
* ReturnType functionName(argumentList);
* Function definition is a block of code
### Ways to define a Function?
* Takes Nothing, Returns Nothing
* Takes Something, Returns Nothing
* Takes Nothing, Returns Something
* Takes Something, Returns Something
### Types of Formal Arguments
* formal arguments can be of three types
  * Ordinary variables of any type
  * Pointer variables
  * Reference variables
### Call by Value
* When formal arguments are ordinary variables, it is function call by value
* Examples:
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
* When formal arguments are pointer variables, is is function call by address
* Examples:
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
* When formal arguments are reference variables, it is function call by reference
* Example:
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
* Easy to read
* Easy to modify
* Avoids rewriting of same code
* Easy to debug
* Better memory utilization
* Function saves memory: Function is a program is to save memory space which becomes appreciable when a function is likely to be called many times.
* Function is time consuming: However every time a function is called, it takes lot of extra time in executing a series of instructions for tasks such as jumping to the functions, saving register, pushing arguments into the stack and returning to the calling function.
* So when function is small it is worthless to spend so much extra time in such tasks in cost of saving comparatively small space.
### Inline Function
* To eliminate the cost of calls to small functions, C++ proposes a new feature called inline function
* An inline function is a function that is expanded in line when it invoked.
* Compiler replaces the function call with the corresponding function code.
* `inline` is a request not a command
* The benefit of speed of inline functions reduces as the function grows in size.
* So the compiler may ignore the request in some situations. Few of them:
  * Function containing `loops`, `switch`, `goto`
  * Function with recursion
  * Containing static variable.
* Example:
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
* Examples
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
* Example:
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
* How Function Overloading is Resolved?
  * First, C++ tries to find an exact match. This is the case where the actual argument exactly matches the parameter type of one of the overloaded functions.
  * if no exact match is found, C++ tries to fund a match through promotion
    * `char`, `unsigned char` and `short` is promoted to and `int`.
    * `float` is promoted to `double`
  * If no promotion is found, C++ tries to find a match through standard conversion.
