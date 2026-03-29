## Lecture 29 - namespace
### namespace
* Namespace is a container for identifiers
* It puts the names of its members in a distinct space so that they don't confilict with the names in other namespaces or global namespace.
### How to create nameapace?
```c++
namespace MySpace {
    // Declarations
}
```
* Namespace definition doesn't terminates with a semicolon likne in class definition.
* The namespace definition must be done at global scope, or nested inside another namespace.
* You can use an alias name for your namespace name, for ease of use. `namespace ms = Myspace;`
### Remember
* Namespace is not a cloas, you cannot create instance of namespace.
### Unnamed namespaces
* There con be unnamed namespaces too.
```c++
namespace {
    // declarations
}
```
### namespaces can be extended
* A namespace definition can be continued and extended ober multiple files, they are not redefined or overridden.
### Accessing members of namespace
* Any name (identifier) declared in a namespace can be explicitly specified using the namespac's name and the scope resolution operator `::` with the identifier.
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
* `using` keyword allows you to import an entire namespace into your program with a global scope.
* It can be used to import a namespace into another namespace or any program.
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