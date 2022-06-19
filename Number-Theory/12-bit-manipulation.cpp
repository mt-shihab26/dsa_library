#include <bits/stdc++.h>
using namespace std;
#define endn '\n'
void print_binary(int num) {
    for (int i = 10; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endn;
}

// Even Odd check
void even_odd_with_bits() {
    for (int i = 0; i < 8; i++) {
        print_binary(i);
        if ((i & 1) == 0) {
            cout << "even";
        }
        else {
            cout << "odd";
        }
        cout << "\n";
    }
}

// Multiply Divide by 2
void multiply_and_divide_by_2() {
    cout << (5 >> 1) << endn;
    cout << (5 << 1) << endn;
    //  101 -> 2^2*1 + 2^1*0 + 2^0*1
    //   10 -> 2^1*1 + 2^0*0
    // 1010 -> 2^3*1 + 2^2*0 + 2^1*1 + 2^0*0
}


// Upper Case Lower Case Conversion
void upper_case_lower_case_conversion() {
    for (char c = 'A'; c <= 'C'; c++) {
        cout << c << " => ";
        print_binary(c);
    }
    for (char c = 'a'; c <= 'c'; c++) {
        cout << c << " => ";
        print_binary(c);
    }


    // upper_to_lower_case
    cout << char('A' | (1 << 5)) << endn;
    cout << char('B' | (1 << 5)) << endn;
    cout << char('Z' | (1 << 5)) << endn;

    // lower_to_upper_case
    cout << char('a' & (~(1 << 5))) << endn;
    cout << char('f' & (~(1 << 5))) << endn;
    cout << char('z' & (~(1 << 5))) << endn;

    // upper_to_lower_case anotehr way
    cout << ' ' << " => ";
    print_binary(int(' '));
    cout << char('A' | ' ') << endn;
    cout << char('B' | ' ') << endn;
    cout << char('Z' | ' ') << endn;

    // lower_to_upper_case another way
    cout << '_' << " => ";
    print_binary(int('_'));
    cout << char('a' & '_') << endn;
    cout << char('f' & '_') << endn;
    cout << char('z' & '_') << endn;
}

// Clear LSB
void clear_lsb() {
    int a = 59;
    print_binary(a);
    int i = 4;
    int b = (a & (~((1<<(i+1))-1)));
    print_binary(b);
}

// Clear MSB
void clear_msb() {
    int a = 59;
    print_binary(a);
    int i = 3;
    int b = a & ((1 << (i+1)) -1);
    print_binary(b);
}

// Power of 2 Check
void power_of_2_check() {
    int n = 16;
    print_binary(n);
    print_binary(n-1);

    if (n & (n-1) == 0) {
        cout << n << " is power of 2" << endn;
    }
    else {
        cout << n << " is not power of 2" << endn;
    }
}

int main() {
    // even_odd_with_bits();
    // multiply_and_divide_by_2();
    // upper_case_lower_case_conversion();
    // clear_lsb();
    // clear_msb();
    power_of_2_check();
}