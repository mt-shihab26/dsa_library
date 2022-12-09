## Lecture 22 Initializers
* Initializer List is used to initialize data members of a class
* The list of members to be initialized is indicated with constructor as a comma sparated list followed by a colon.
* Example
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
* There are situations where initialization of data members inside constructor doesn't work and initializer List must be used.
    * For initialization of non-static `const` data members
    * For initialization of reference members