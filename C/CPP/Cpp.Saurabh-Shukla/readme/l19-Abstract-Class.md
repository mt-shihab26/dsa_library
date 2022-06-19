## Lecture 19 - Abstract Class
### Pure Virtual Function
* A do nothing function is pure virtual function
```c++
#include<iostream>
using namespace std;

class Base
{
int x;
public:
	virtual void fun() = 0; // pure virtual function
	int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived: public Base
{
	int y;
public:
	void fun() { cout << "fun() called"; }
};

int main(void)
{
	Derived d;
	d.fun();
	return 0;
}
```

### Abstract class
* A class containing pure virtual function is an abstract class
* We can not instantiate abstract class