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

    cout << "Sum: " << add(objectA, objectB) << endl;
    return 0;
}