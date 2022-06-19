#include <iostream>
using namespace std;

int main(void) {
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
    // Output the value of food (Pizza)
    cout << food << "\n";
    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";
    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";


    // Dereferenceing Pointer
    string food1 = "Pizza";  // Variable declaration
    string* ptr1 = &food1;    // Pointer declaration
    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr1 << "\n";
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr1 << "\n";

    
    // Modify the Pointer Value
    string food2 = "Pizza";
    string* ptr2 = &food2;
    // Output the value of food2 (Pizza)
    cout << food2 << "\n";
    // Output the memory address of food2 (0x6dfed4)
    cout << &food2 << "\n";
    // Access the memory address of food2 and output its value (Pizza)
    cout << *ptr2 << "\n";
    // Change the value of the pointer
    *ptr2 = "Hamburger";
    // Output the new value of the pointer (Hamburger)
    cout << *ptr2 << "\n";

    // Output the new value of the food2 variable (Hamburger)
    cout << food2 << "\n";

}