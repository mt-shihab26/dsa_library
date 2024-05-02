#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

// Any base to Decimal
lli any_to_decimal(lli any, int from_base)
{
    int pt = 0, last;
    lli decimal = 0;
    while (any)
    {
        last = any % 10;
        decimal += (last * pow(from_base, pt++));
        any /= 10;
    }
    return decimal;
}
// decimal number to any base number
lli decimal_to_any(lli decimal, int to_base)
{
    int pt = 0, last;
    lli new_num = 0;
    while (decimal)
    {
        last = decimal % to_base;
        new_num = (last * pow(10, pt++)) + new_num;
        decimal /= to_base;
    }
    return new_num;
}
// Any base to Any base
lli any_to_any(lli from_any, int from_base, int to_base)
{
    lli decimal = any_to_decimal(from_any, from_base);
    return decimal_to_any(decimal, to_base);
}

// Binary to Decimal shortcut
lli binary_to_decimal(lli binary)
{
    int pt = 0, last;
    lli decimal = 0;
    while (binary)
    {
        last = binary % 10;
        if (last == 1)
            decimal += pow(2, pt);
        pt++;
        binary /= 10;
    }
    return decimal;
}

void test_decimal_to_any(lli decimal, int base, lli exp)
{
    lli new_num = decimal_to_any(decimal, base);
    cout << boolalpha << "decimal_to_any: (" << decimal << ")10";
    cout << " (" << new_num << ")" << base << " exp: (";
    cout << exp << ")" << base << " res: " << (new_num == exp) << "\n";
}
void test_any_to_decimal(lli any, int base, lli exp)
{
    lli decimal = any_to_decimal(any, base);
    cout << boolalpha << "any_to_decimal: (" << any << ")" << base;
    cout << " (" << decimal << ")10"
         << " exp: (" << exp << ")10";
    cout << " res: " << (decimal == exp) << "\n";
}
void test_binary_to_decimal(lli binary, lli exp)
{
    lli decimal = binary_to_decimal(binary);
    cout << boolalpha << "binary_to_decimal: (" << binary << ")2";
    cout << " (" << decimal << ")10"
         << " exp: (" << exp << ")10";
    cout << " res: " << (decimal == exp) << "\n";
}
void test_any_to_any(lli from_any, int from_base, int to_base, int exp)
{
    lli result = any_to_any(from_any, from_base, to_base);
    cout << boolalpha << "any_to_any: (" << from_any << ")" << from_base;
    cout << " (" << result << ")" << to_base << " exp: (" << exp << ")";
    cout << to_base << " res: " << (result == exp) << "\n";
}

int main()
{
    // test_decimal_to_any(2934, 2, 101101110110);
    // test_decimal_to_any(2934, 8, 5566);

    // test_any_to_decimal(341, 5, 96);
    // test_any_to_decimal(162, 7, 93);

    // test_binary_to_decimal(10101, 21);
    // test_binary_to_decimal(1101, 13);

    // test_any_to_any(321, 4, 5, 212);
    // test_any_to_any(52, 6, 9, 35);
    // test_any_to_any(566, 7, 3, 101212);
    // test_any_to_any(1102, 3, 6, 102);
}