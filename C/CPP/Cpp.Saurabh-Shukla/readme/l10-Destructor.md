## Lecture 10 - Destructor
* Destructor
### Destructor
* Destructor is an instance member function of a class
* The name of the destructor is same as the name of a class but preceded by tilde(~) sumbol
* Destructors can never be static
* Destructor has no return type
* Destructor takes not argument (No overloading is possible)
* It is invoked implicitly when object is going to destroy.
### Why destructor?
* it should be defined to release resources allocated to and object.
* Examples:
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
