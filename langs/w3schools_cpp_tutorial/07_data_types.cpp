#include <iostream>
// Include the string library
#include <string>
using namespace std;

int main(void) {
    // Basic Data Types
    int myNum = 5;             // 4 bytes  // Integer (whole number)
    float myFloatNum = 5.99;   // 4 bytes  // Floating point number
    double myDoubleNum = 9.98; // 8 bytes  // Floating point number
    char myLetter = 'D';       // 1 bytes  // Character
    bool myBoolean = true;     // 1 bytes  // Boolean
    string myText = "Hello";    	   // String


    // Numeric Data Types
    // int
    int my_int = 1000;
    cout <<my_int <<"\n";
    // float
    float my_float = 5.75;
    cout <<my_float <<"\n";
    // double
    double my_num = 19.99;
    cout <<my_num <<"\n";
    //float vs double
    // float precision is 7 digit after decimal point
    // double precision is 15 digit after decimal point


    // Boolean Data Types
    bool is_coding_fun = true;
    bool is_fish_tasty = false;
    cout <<is_coding_fun <<"\n"; // Output 1 (true)
    cout <<is_fish_tasty <<"\n"; // Output 0 (false)


    // Character Data Types
    char my_grade = 'A';
    cout <<my_grade <<"\n";

    char a = 65, b = 66, c = 67; // ASCII values to display certain characters
    cout <<a <<"\n";
    cout <<b <<"\n";
    cout <<c <<"\n";


    // Strings
    // Create a string variable
    string greeting = "Hello";
    // Output string value
    cout <<greeting <<"\n";

    return 0;
}
