## Lecture 17 - Method Overriding
* Method Overriding
* Method Hiding
* Example
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