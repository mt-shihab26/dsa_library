#include <bits/stdc++.h>
using namespace std;
using lli = long long int;


lli add(lli num1,lli num2, int base) {
    int last_num1, last_num2, added, in_hand = 0;
    lli result = 0, wp = 1;
    while (num1 != 0 || num2 != 0) {
        last_num1 = num1 % 10;
        last_num2 = num2 % 10;
        added = last_num1 + last_num2 + in_hand;
        in_hand = 0;
        while (added >= base) {
            added -=  base;
            in_hand++;
        }
        result = (added * wp) + result;
        wp *= 10;
        num1 /= 10;
        num2 /= 10;
    }
    result = (in_hand * wp) + result;
    return result;
}

lli sub(lli num1, lli num2, int base) {
    int in_hand = 0, last_num1, last_num2;
    int result = 0, subed, wp = 1;
    while (num1 || num2) {
        last_num1 = num1 % 10;
        last_num2 = num2 % 10 + in_hand;

        in_hand = 0;
        while (last_num1 < last_num2) {
            last_num1 += base;
            in_hand++;
        }
        subed = last_num1 - last_num2;
        result = (subed * wp) + result; 
        wp *= 10;
        num1 /= 10;
        num2 /= 10;
    }
    return result;
}


int main() {
    cout << add(765, 27, 8) << "\n";

    cout << sub(11001, 111, 2) << "\n"; // 10010
    cout << sub(50, 20, 10) << "\n";
    cout << sub(70, 11, 8) << "\n";
    cout << sub(10000, 111, 2) << "\n";
}