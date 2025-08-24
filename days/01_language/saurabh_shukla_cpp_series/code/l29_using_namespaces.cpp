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

