## Lecture 37 - Vector Class in STL
* The most general purpose container is the Vector
* It supports a Dynamic array
* Vector beging a Dynamic array, doesn't needs size during declaration
* Code will create a blank vector `vector <int> v1`

### Initialize during declaration
* Zero length vector
```c++
vector <int> v1;
```
* Creates a 5 element char vector
```c++
vector <char> cv(5);
```
* Initializes 4 element char vector with 'a'
```c++
vector <char> cv(4, 'a');
```
* Initializes spacefic value
```c++
vector <string> v {"Shihab", "Shawon"};
```
### Subscrpt operator`[]`
* Subscript operator is also defined for vector.
```c++
vector <int> v {10, 30};
cout << v[1] << endl;
// Output: 30
```
### `push_back()`
* `push_back()` is a member function, which can be used to add value to the vector at the end.
```c++
vector <int> v;
v.push_back(10);
cout << v[0] << endl;
// Output: 10
```
### `pop_back()`
* It removes the last element
```c++
vector <int> v {10, 20, 30, 40};

v.pop_back();

for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
cout << endl;
// Output: 10 20 30
```
### `capacity()`
* It returns the capacity of the vector
* This is the number of element it can hold before it will need to allocate more memory.
### `size()`
* It returns the number of elements currently in the vector
### `clear()`
* It removes all elements from the vector
### `insert()`
```c++
vector <int> v {10, 20, 30, 40, 50};

for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
cout << endl;

vector <int>::iterator it=v.begin();

v.insert(it+2, 25);
for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
cout << endl;
```