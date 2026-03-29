# Preprocessor

## What is Pre-processor?
* Pre-processor is a program which performs before the compilation.
* Pre-processor only notices `#` started statements
* `#` is called pre-processor directive
* Each preprocessing directive must be on its own line.
* Thw word after `#` is called pre-processor command.
## `#include`
* include is one of the most popular pre-processor command
* It can be used include any file content to your source file.
```c
#include <file_name.h>
#include "file_name.h"
```
* You can write your source code in multiple .c fies. You can include all these source files in the same way as you include header file.