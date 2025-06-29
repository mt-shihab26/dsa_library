#include <iostream>
using namespace std;

#define endn "\n"

int main(void) {
    int my_num = 5; // Integer (whole number without decimals
    double my_float_num = 5.99; // Floating point number (with decimals)
    char my_letter = 'S'; // Character
    string my_text = "Hello"; // String (text)
    bool my_boolean = true; // Boolean (true or false)

    cout <<"int: " << my_num <<"\n";
    cout <<"double: " << my_float_num <<"\n";
    cout <<"char: " << my_letter <<"\n";
    cout <<"string: " << my_text <<"\n";
    cout <<"bool: " << my_boolean <<"\n";
    cout << endn endn;

    // declare many varibles
    int x = 5, y = 6, z = 50;
    double xd = 5.23, yd = 6.334, zd = 50.234;
    char xc = 'x', yc = 'y', zc = 'z';
    string xs = "hello", ys = "world";
    bool xb = true, yb = false, zb = true;

    // Constants
    const int num = 15; // num will always be 15
    //num = 10; // error: assignment of read-only variable 'num'
    const int minutes_per_hour = 60;
    const double PI = 3.1416;
    const char ac = 'a';
    const string st = "hello world";
    const bool man_is_motel = true;


    return 0;
}
