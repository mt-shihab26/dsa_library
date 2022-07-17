#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

/*
    1 0 ---> 1
    0 1 ---> 1
    1 1 ---> 0
    0 0 ---> 0

    101 ^ 101 ---> 000
    x ^ x ---> 0;

    101 ^ 000 ---> 101
    x ^ 0 ---> x;

    x ^ y ^ z == y ^ z ^ x == z ^ y ^ x
*/

// Swap two number with xor
void swap_with_xor()
{
    int a = 4, b = 6;

    a = a ^ b;
    b = b ^ a; // b = a;
    // b = b ^ (a ^ b) ---> b = b ^ b ^ a --> b = 0 ^ a --> b = a
    a = a ^ b; // a = b;
    // a = (a ^ b) ^ a --> a = a ^ a ^ b --> a = 0 ^ b --> a = b;
    cout << a << " " << b << endn;
}

void a_problem_with_xor()
{
    /*
    Given array a of n integers. all integers are
    present in even count except one.
    Find that one integer which has odd count
    int O(n) time complexity and O(1) space;
    */

    vector<int> a = {2, 3, 5, 2, 3, 3, 3, 5, 8};
    int ans = 0;
    for (int ith : a)
    {
        ans ^= ith;
    }
    cout << ans << endn;

    /*
        c ^ a ^ b ^ c ^ b
    --> a ^ b ^ b ^ c ^ c
    --> a ^ 0 ^ 0
    --> a
    */
}

int main()
{
    // swap_with_xor();
    a_problem_with_xor();
}