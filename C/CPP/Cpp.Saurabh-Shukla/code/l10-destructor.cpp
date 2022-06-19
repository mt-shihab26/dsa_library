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