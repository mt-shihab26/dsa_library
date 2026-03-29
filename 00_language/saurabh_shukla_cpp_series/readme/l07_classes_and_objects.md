## Lecture 7 - Classes and Objects
### Class and Structure
* The only difference between structure and class is that, 
  * the members of structures are by default public and
  * the members of class are by default private.
* Example:
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
* Examples 02
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
* Class is a description of an object
* Object is and instance of a class
* Instance member variable also called
    * Attributes, data members, fields, properties
* Instance member functions also called
    * Methods, procedures, actions, operations, services
