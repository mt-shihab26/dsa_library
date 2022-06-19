## Lecture 03 - Input Output
* Output Instructuion
* Input Instruction
* About iostream.h
### Output Instructuion
* in C, standard output device is monitor and `printf()` is use to send dat/massage to monitor.
* `printf()` is a predefined function
* In C++, we can use `cout` to send data/message to monitor.
* `cout` is a prediefined object
* The operator `<<` is called the insertion or put to operator
* examples
    ```c++
    printf("Hello SCA");
    cout << "Hello SCA;
    
    printf("Sum of %d and %d is %d", a, b, c);
    cout << "Sum of " << a << " and " << b << "is" << c;
    
    printf("%d", a + b);
    cout << a + b;
    ```
### Input Instruction
* In C, standard input device is keyboard and `scanf()` is use to receive data from keyboard
* `scanf()` is a predefined function
* In C++, we can use `cin` to input data from keyboard
* The identifier `cin` is a predefined object is C++
* The operator `>> ` is known as **extraction** or **get from** operator
* examples:
    ```c++
    scanf("%d", &a);
    cin >> a;
    
    scanf("%d%d", &a, &b);
    cin >> a >> b;
    
    scanf("%d%f", &a, &f);
    cin >> a >> f;
    ```
### Header Files
* According to the ANSI standards for C language, explicit declaration of function is recommended but not mandatory
* ANSI standards for C++ language says explicit declaration of function is compulsory.
* Predefined functions are declared in header files, so whenever you are using any predefined function in you code, you have to include specific header file that contains its declaration.
### About `iostream`
* We need to include header file `iostream`, it contains declarations for the identifier `cout` and the operator `<<`. And also for the identifier `cin` and operator `>>`.
* Header file contains declaration of identifiers
* identifiers can be function names, variables, objects, Macros etc
### `endl`
* Inserting `endl` into output stream causes the screen cursor to move to the beginning of the next line.examples
* `endl` is a manipulator and it is declared in `iostream`
* `'\n'` character also works as it works in C