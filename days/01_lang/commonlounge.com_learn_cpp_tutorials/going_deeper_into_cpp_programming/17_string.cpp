#include <iostream>
#include <string>
using namespace std;

int main(void) {
    // String literals
    string str_literals = "Hello World";


    // Escaping
    cout << "Alice said \"How do you do?\"\nBob replied, \"Very well thank you!\"" << endl;


    // Raw strings
    string row = R"(this\t\n and that)";
    cout << row << endl;


    // Multiline strings
    string multiline_row = R"(Beware the Jabberwock, my son!
The jaws that bite, the claws that catch!
Beware the Jubjub bird, and shun
The frumious Bandersnatch!"\n)";
    cout << multiline_row << endl;


    // Converting to string
    double pi = 3.14;
    string text = "The value of pi is " + to_string(pi);
    cout << text << endl;


    // Accessing string charactes
    string ac_chr = "Hello";
    cout << ac_chr[0] << " " << ac_chr[2] << endl;


    // String Methods
    // s.length()
    string s = "Hello";
    cout << s.length() << endl;
    // s.substr()
    cout << s.substr(1, 3) << endl;
    cout << s.substr(1) << endl;
    cout << s.substr() << endl;
    cout << s.substr(1, 100) << endl;


    // String Concatenation
    string str = "Hello";
    cout << s + " there" << endl;
    // s.append()
    s.append(" there");
    cout << s << endl;

    // Find Substring in String
    // s.find()
    string s_fin = "Hello there";
    cout << s_fin.find("the") << endl;


    // Replace or remove part of the string
    // s.replace()
    string a = "hello there";
    a.replace(1, 4, "ey");
    cout << a << endl;
    cout << a[2] << endl;
    // s.erase()
    string x = "Hello world";
    x.erase(1, 3);
    cout << x << endl;


    // Characters and ASCII
    cout << (int)'c' << endl;
    cout << (char)99 << endl;
    // converting lowercase to uppercase
    cout << (char)('a' - 32) << endl;
    cout << (char)('f' - 32) << endl;
    cout << (char)('D' + 32) << endl;
    cout << (char)('K' + 32) << endl;
    // toupper() and tolower() function
    string as = "hello world";
    for (int i = 0; i < a.length(); i++) {
        as[i] = toupper(as[i]);
    }
    cout << as << endl;
    // Output - HELLO WORLD


    // Character Comparisons with function
    // isalpha()
    char str_com = 'a';
    cout << isalpha(str_com) << endl;
    cout << isdigit(str_com) << endl;
    cout << isspace(str_com) << endl;


    // Comparing tow string in C++
    cout << boolalpha;
    string abc = "abc";
    // 'a' is amaller than 'd'
    cout << (abc < "def") << endl;
    // ture
    // 'A' is smaller than 'a'
    cout << (abc < "ABC") << endl;
    // flase
    // empty string is the smallest string
    cout << ("" < abc) << endl;
    // ture
    cout << ("abc" < "abc") << endl;



    return 0;
}