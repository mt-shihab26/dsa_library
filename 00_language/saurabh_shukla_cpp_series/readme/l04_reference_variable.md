## Lecture 04 - Reference Variables
* Reference Variable
### Reference Variable
* Reference means address
* Reference variable is an internal pointer
* Declaration of Reference variable is preceded with `&` symbol (but do not read it as address of)
* Reference variable must be initialized during declaration.
* It can be initialized with already declared variables only
* Reference variables can not be updated
### Example
```c++
#include<iostream>
using namespace std;

int main()
{
int x = 10;

// ref is a reference to x.
int &ref = x;

// Value of x is now changed to 20
ref = 20;
cout << "x = " << x << endl ;

// Value of x is now changed to 30
x = 30;
cout << "ref = " << ref << endl ;

return 0;
}

```
Output:
```bash
x = 20
ref = 30
```