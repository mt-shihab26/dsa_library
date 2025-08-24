## Lecture 8 - Static Members
* Static local variables
* Static member variables
* Static Member Functions
### Static Local variables
* Concept as it is taken from C
* They are by default initialized to zero
* Their lifetime is throughout the program
### Static Member variable
* Declared inside the class body
* Also known as class member variable
* They must be defined outside the class
* Static member variable does not belong to any object, but to the whole class.
* There will be only one copy of static member variable for the whole class
* Any object can use the same copy of class variable
* They can also be used with class name
* Examples:
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
* They are qualified with the keyword `static`
* They are also called class member functions
* They can be invoked with or without object
* They can only access static member of the class
* Example:
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
