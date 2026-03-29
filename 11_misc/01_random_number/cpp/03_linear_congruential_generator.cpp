#include <bits/stdc++.h>
using namespace std;

int main()
{
    // LCG
    // Linear Congruential Generator

    // new element = ((old element * number1) + number2) % number3
    // number1, number2, number3 will be constant

    // Xn = ((Xn - 1 * a) + b) % m

    /*
        a = 3
        b = 5
        m = 10
        seed = 2

        ((2 * 3) + 5) % 10
        11 % 10 = 1

        ((1 * 3) + 5) % 10
        8 % 10 = 8

        ((8 * 3) + 5) % 10
        29 % 10 = 9

        2, 1, 8, 9

        ((9 * 3) + 5) % 10
        32 % 10 = 2

        ((2 * 3) + 5) % 10
        11 % 10 = 1

        ((1 * 3) + 5) % 10
        8 % 10 = 8

        ((8 * 3) + 5) % 10
        29 % 10 = 9


        2, 1, 8, 9

        SO, 2, 1, 8, 9,   2, 1, 8, 9 .. 

    */


}