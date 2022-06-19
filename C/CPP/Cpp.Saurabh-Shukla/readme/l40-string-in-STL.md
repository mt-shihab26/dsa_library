## Lecture 40 string class
### Traditional way
* Using null-terminated characteer arrays are not technically data types
* So, C++ operators cnnot be applied to them
* `char s1[10];
### string class
* The string class is a specialization of a more general template class basic_string
* Since defining class in C++ is creating a new data type, string is derived data type.
* This means operatos can be overloaded for the class
### string is safe then char array
* Careless programmer can overrun the en of an array that holds a null terminated string.
* strign class hanldes such issues
### string is in STL
* string is an onohter container class
* To use string class, you have to include string header. `#include <string>`
### string class Constructors
* string class supports many constructor, some ot them are
    * `string()`
    * `string(const char *str)`
    * `string(const string &str)`
### operators supports
* `=` Assignment
* `+` Concatenation
* `+=` Concatenation assignment
* `==` Equality
* `!=` Inerquality
* `<` Less than
* `<=` Less than or equal
* `>` Greater than
* `>=` Greater than or equal
* `[]` Subscripting
### Insertion and Extraction
* `<<` Insertion (for output)
* `>>` Extraction (for input)
### Mixed operations
* You can mix string objects with another string object or c style string
* C++ string can also be concatenated with charctre constant
### Useful methods
* `assign()`
* `append()`
* `insert()`
* `replace()`
* `erase()`
* `find()`
* `rfind()`
* `compare()`
* `c_str()`
* `size()`
