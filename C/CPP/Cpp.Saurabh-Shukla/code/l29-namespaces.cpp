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

