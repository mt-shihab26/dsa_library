## Lecture 34 Array in STL
* Array is a linear collection of similar elements.
* Array container is STL provides use the implementation of static array
* Use Header array `#include <array>`
### Creating array objects
* `array <object_type, array_size> array_name;`
* It creates an empty array of object_type with maximum size of array_size.
### Assignment of value during declaration
* `arra <int, 4)> add_numbers = {2, 4, 6, 8};`
### Member functions
* Following are the important and most used member function of array templeate
* `at()`
* `[]` operator
* `front()`
* `back()`
* `fill()`
* `swap()`
* `size()`
* `begin()`
* `end()`
### `array.at()`
* This method returns value in the array at the given range
* if the given range is greadter than the array size, out_of_range exception is thrown
### `[]` operator
* The use of operato `[]` is same as it was for nomal arrays
### `array.front()` and `array.back()`
* `array.front()` method return the first element in the array.
* `array.back()` method returns the last element in the array.
### `array.fill()`
* This method assigns the given value to every element of the array.
### `swap()`
* This method swaps the content of two arrays of smae type and same size.
* It swaps index wise, thus element of index i of first array will be swapped with the element of index i of the second array.
* `first_array.swap(second_array)`
### `array.size()`
* This method reutrns the number of element present in the array.
### `array.begin()` and `array.end()`
* `array.begin() method returns the iterator pointing to the first element of the array.
* `array.end()` method returns an iterator pointing to an element next to the last element in the array.
