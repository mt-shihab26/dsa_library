#include <bits/stdc++.h>
#define endn '\n';
#define arw " => "
using namespace std;

void get_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
}


// get is ith bit set
bool is_ith_bit_set(int num, int position) {
    return (num & (1 << position)) != 0;
}

// set ith bit
void set_ith_bit(int &num, int position) {
    num = num | (1 << position);
}

// unser ith bit
void unser_a_bit(int &num, int position) {
    num = num & (~(1 << position));
}

// toggle ith bit
void toggle_ith_bit(int &num, int position) {
    num = num ^ (1 << position);
}

// bit count
int bit_count(int num) {
    int ct = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num & (1 << i)) != 0) ct++;
    }
    return ct;
}

// bit count another way
int bit_count2(int num) {
    int ct = 0;
    for (int i = 31; i >= 0; i--) {
        ct += (num >> i) & 1;
    }
    return ct;
}


int main() {
    cout << boolalpha;

    int num = 5;
    get_binary(num);
    cout << arw << is_ith_bit_set(num, 1) << endn;


    int num2 = 5;
    get_binary(num2);
    set_ith_bit(num2, 1);
    cout << arw;
    get_binary(num2);
    cout << endn;


    int num3 = 15;
    get_binary(num3);
    unser_a_bit(num3, 2);
    cout << arw;
    get_binary(num3);
    cout << endn;


    int num4 = 14;
    get_binary(num4);
    toggle_ith_bit(num4, 2);
    cout << arw;
    get_binary(num4);
    cout << endn;

    get_binary(13);
    cout << arw << bit_count(13) << endn;

    get_binary(13);
    cout << arw << bit_count2(13) << endn;

    cout << __builtin_popcount(13) << endn;
    cout << __builtin_popcountll((1ll << 35)-1) << endn; 
}
