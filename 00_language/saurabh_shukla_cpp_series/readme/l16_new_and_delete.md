## Lecture 16 - new and delete
### SMA vs DMA
* SMA: Static Memory Allocation
    * Examples
    ```c++
    int x;
    float y;
    Complex c2;
    Student s1;
    ```
* DMA: Dynamic memory Allocation
### `new`
```c++
int *p = new int;
float *q = new float;
Complex *ptr = new Complex;
float *q = new float[5]

int x;
cin >> x;
int *p = new int[x];
```
### `delete`
```c++
delete p;
delete []p;
```