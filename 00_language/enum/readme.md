# Enumerators
## What is Enumerator?
* It gives an opportunity to invent own data type and define what values the variable of this data type can take.
```c
enum month {
    jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
```
## Creating variables of enumerators
```c
int main(void) {
    enum month m1, m2, m3;
}
```
* Internally, compiler treats the enumeratos as integers
* Each value on the list of permissible values corresponds to an integer, starting with 0. in the example, **jan** is stored as **0**, **feb** is stored as **1** ..., **dec** is stored as **11**.
## Changing the default value of enum elements
```c
enum month {
    jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

int main(void) {
    enum month m1, m2, m3;
}
```
* We can initialize enumerators with different integer values.
## Another example
```c
enum boolean {
    false, true
}
```
* You can write any program in C language without the help of enumerations but, enumerations helps in writing clear codes and simplify programming.
