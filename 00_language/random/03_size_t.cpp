/*
    TOPIC: size_t data type in C/C++!

    POINTS:
    1. It is used to represent size of objects/variables in bytes.
    2. sizeof returns this data type only.
    3. It guarante to be gi enough to contain the sizoe of the biggest object that system can handle.
        a. If compiler is 32 bit: IT IS typedef of unsigned int
        b. if compiler is 64 bit: IT IS typedef of unsigned long long.
    4. It is never negative.
    5. Standard functions use this type of count/number.
        1. malloc (size_t) or new keyword
        2. memcopy(desc, source, size_t)
        3. size_t strlen(const char*)
*/

#include <bits/stdc++.h>

void print(size_t count)
{
    while (count--)
        std::cout << "Something ";
    std::cout << "\n";
}

int main()
{
    print(10);
    return 0;
}