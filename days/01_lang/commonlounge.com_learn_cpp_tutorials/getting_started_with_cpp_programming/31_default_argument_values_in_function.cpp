#include <iostream>
using namespace std;

void greet(string name = "Commonlounge") {
    cout << "Hi " << name << "!" << endl;
}

int main() {
    greet();
    greet("SM");

    return 0;
}