#include <iostream>
#include <string>
using namespace std;

int main() {
    // Strings
    // Create a string variable
    string greeting = "Hello";
    // Output string value
    cout <<greeting <<"\n";

    // String Concatenation
    string first_name = "John ";
    string last_name = "Doe";
    string full_name = first_name + ' ' + " " + last_name;
    cout <<full_name <<"\n";
    // with append
    string full_name_append= first_name.append(last_name); // append funciton much faster
    cout <<full_name_append<<"\n";
    cout <<first_name <<"\n";

    // Numbers and Strings
    string x = "10";
    int y = 20;
    // string z = x + y; // get error

    // String Length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " <<txt.length() <<"\n";
    cout << "The length of the txt string is: " <<txt.size() <<"\n"; // size is alias of length. so it is ok

    // Access Strings
    string my_string = "Hello";
    cout <<my_string[0] <<"\n";
    // Change string Characters
    my_string[0] = 'J';
    cout <<my_string <<"\n";

    // Input Strings
    string f_name;
    cout <<"Type your first name: ";
    cin >>f_name;
    cout <<"Your name is: " <<f_name <<"\n";
    // get string with space
    string full;
    cin.ignore();
    cout <<"Type your full name: ";
    getline(cin, full);
    cout <<"Your name is: " << full <<"\n";
}