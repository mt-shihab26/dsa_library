# [Learn C++ (commonlounge.com)](https://www.commonlounge.com/discussion/b7d5d197ea274a0f83eee5c1c9d17e8c/main?ref=link-user-share-da0515ae2e504ebd89ef255a83eba6fb)

## Getting started with C++ programming

### Your First C++ Program - "Hello World"

### C++ Data-types and Operators

Summary
OK, enough of numbers, and rest of the data-types. So far you've learned about:

- numbers, characters and booleans – in C++ numbers are used for math, characters for a single character, and booleans for true/false values.
- operators – like + and \*, combine values to produce a new one

### C++ String Basics

Summary
OK, enough of strings, functions and errors. So far you've learned about:

- strings – in C++, strings are used for text objects.
- functions – like .length() and to_string(), perform actions on objects.
- errors – you now know how to read and understand errors that show up if C++ doesn't understand a command you've given it.
  There was quite a lot you covered! The next quiz will make sure you understood the topics well. Ready?

### C++ Variables and User Input

Conclusion
In this tutorial we learnt about:

- variables - used to store values
- asking the user for input - using the cin command
- modifiers - which change the range of values that can be stored or the precision (for decimal values)
  In the appendices below, we introduce assignment operations and increment / decrement operator. These operators are just shorthands for certain things that we need to do often in C++, i.e. they are not conceptually new things in C++. Rather, they make the code more concise.

### C++: If Statements and Comments

Summary
In the last few exercises you learned about:

- comparing things – in C++ you can compare things by using >, >=, ==, <=, < and the &&, || and ! operators.
- Boolean – a type of object that can only have one of two values: true or false
- if … else if … else – statements that allow you to execute code only when certain conditions are met.
  comments - lines that C++ won't run which let you document your code

#### Appendix: List of Comparison Operators

The following is a list of all comparison operations supported by C++.
Operator | Example | Result | Description
---------|---------|--------|--------------------------------
== | 4 == 5 | false | is equal to
!= | 4 != 5 | true | is not equal to

>     | 4 > 5   | false  | is greater than
>
> < | 4 < 5 | true | is less than
> = | 4 >= 5 | false | is greater than or equal to
> <= | 4 <= 5 | true | is less than or equal to

#### Appendix: List of Boolean Operators

The following is a list of all boolean operations supported by C++.
Operator | Examples | Result | Description
----------|-----------------|--------|-------------------------------
&& (and) | 3 < 4 && 5 < 4 | false | true if both values are true
| 3 < 4 && 5 > 4 | true |
\|\| (or) |3 < 4 \|\| 5 < 4| true | true if at-least one value is true
| 3 > 4 \|\| 5 < 4 |false|  
 ! (not) | !false | true | inverts the value
| !true | false |

### C++ Arrays and Loops

Summary
In the last few exercises you learned about:

- arrays – you learnt to declare arrays in C++, how to access its elements, and how to iterate over the elements with the help of a loop.
- multi-dimensional arrays - how to declare, initialize and access elements of an array with 2 or more dimensions
- loops – you learnt two types of loops, the while-loop and the for-loop
- break and continue – break can be used to exit the loop, and continue can be used to skip some parts of the loop body

### C++ Functions

Summary
In this chapter, you learnt about

- functions - a set of instructions that are executed when a function is called
- arguments and return values - passing values when calling a function, and getting a result
- passing by value vs passing by reference - passing arguments so that they can be directly modified by the function and a copy of the argument is not made

## Going deeper into C++ programming

### Vectors, Pairs and Maps

When should you use a map or a vector?

- Do you just need an ordered sequence of items? Go for a vector.
- Do you need to associate values with keys, so you can look them up efficiently (by key) later on? Use a map.

Summary
Awesome! You know a lot about programming now. In this tutorial you learnt about:

- vectors – Vectors are sequence containers similar to arrays, with the additional flexibility the elements can be inserted / deleted
- pairs – a pair of values which may be of different types
- maps – container which stores key–value pairs
- iterators - Iterators point to a location. C++ containers such as vectors and maps define .begin() and .end() iterators, which allows us to iterate over all values in the container.

### C++ String Methods

Summary
In this tutorial, you learnt about

- string literals - including literals with special characters and multi-line strings
- accessing string characters - characters of a string can be accessed using [index]
- string methods - all sorts of useful things we can do with strings
- ASCII values - C++ stores characters as integers behind the scenes
- string comparison - what C++ does behind the scenes when comparing two strings

### C++ Pointer and Memory Allocation

### C++ Sorting and File Input-Output

Summary
In the last few exercises you learnt about:

- sort - how to sort arrays and vectors, how to create your own comparison function to sort using a different criteria
- file handling - how to open / close files, how to read / write from a file
- getline - how to take input with spaces between words using the getline() function
