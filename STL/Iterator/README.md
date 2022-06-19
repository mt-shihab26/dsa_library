# Iterator

## Details
* NOTE: `v.end()` is the iterator to a non-existent element (after the last element)
* These behave a lot like pointers.
* `vector<int> v = {10, 15, 12, 5, 20};` | `int a[5] = {10, 15, 12, 5, 20};`
* `vector<int>::iterator it = v.begin();` | `int *p = a;`
* // OR `auto it = v.begin();`
* `cout << *it;` // 10 | `cout << *p;` // 10
* `it++;` | `p++;`
* `cout << *it;` // 15 | `cout << *p;` // 15
* `it--;` | `p--;`
* `cout << *it;` // 10 | `cout << *p;` // 10
* `cout << *(it + 3);` // 5 | `cout << *(p + 3);` // 5

## Iterating Containers
```c++
for(auto it = s.begin(); it != s.end(); it++){
    // *it
}
// This works for all three: set, map and vector
```
* Shorthand:
```c++
vector<int> v;
for(int x:v){
     // x
}
```
```c++
set<int> s;
for(int x:s){
     // x
}
```
```cpp
map<int,int> m;
for(pair<int,int> x:v){
     // x.first, x.second
}
```