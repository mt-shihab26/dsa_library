## Lecture 27 - Exception Handling

### Exceptions

-   Exception is any abnormal behaviour, run time error.
-   Exceptions are off beat situation in your program where your program should be ready to handle it with appropriate response.

### Exceptions Handiling

-   C++ provides a built-in error handiling mechanism tha is called exception handling.
-   Using exception handling, you can more easily manage and respond to runtime errors.

### `try`, `catch`, `throw`

-   Program statements that you want to monitor for exceptions are contained in a `try` block.
-   If any exception occurs with try block, it is thrown (using `throw`).
-   The exception is caught, using `catch`, and processed.

### Syntac

```c++
try {
    ......
}
catch (type1 arg) {
    ......
}
catch (type1 arg) {
    ......
}
.....
catch (typeN arg) {
    ......
}
```

### `catch`

-   When an exceptiion is caught, arg will receive its value.
-   If you don't need access to the exception itself, specify only type in the catch clause - arg is optional.
-   Any type of data can be caught, including classes that you create.

### `throw`

-   The general form of the throw statement is: throe exception;
-   Throw must be executed either witin the try block proper or frome any function that the code witin the block calls.

## [Lecture 28 - Dynamic Constructor](https://github.com/p-nerd/SelfStudy/tree/main/Structure-Programming-With-Cpp/Cpp-by-Saurabh-Shukla/l28-Dynamic-Constructor.md)

-   Constructor can allocate dynamically created memory to the object.
-   Thus, object is going to use memory region, which is dynamically created by constructor

```c++
#include <iostream>
using namespace std;

class A {
    int a, b;
    int *p;
public:
    A() {

    }
    A(int x, int y, int z) {
        a = x;
        b = y;
        p = new int;
        *p = z;
    }
};

int main(void) {
    A o1, o3(3, 4, 5);

    return 0;
}
```
