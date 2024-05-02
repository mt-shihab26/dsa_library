#include <iostream>
using namespace std;

int main(void) {
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    // Memory Address
    cout << &food; // Outputs 0x6dfed4 
}
