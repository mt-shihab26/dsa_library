#include <iostream>
#include <bitset>

int main(void) {
    std::bitset<10> bs;
    std::cout << bs << "\n";

    // first way

    // bs[0] = 1;
    // bs[2] = 1;

    // std::cout << bs << "\n";


    // second way
    // bs.set();
    // bs.set(1);
    // bs.set(1, 0);
    // std::cout <<bs << "\n";


    // third way
    // bs.set();
    // bs.reset();
    // bs.reset(1);
    // std::cout << bs << "\n";

    // fourth way
    // bs.flip();
    // bs.flip(1);
    // std::cout << bs << "\n";

    // betset::cout();
    // bs[0] = 1;
    // bs[2] = 1;
    // std::cout << bs.count() <<"\n";

    // bitset::any();
    // std::cout << bs.any() << "\n";
    // bs[1] = 1;
    // std::cout << bs.any() << "\n";

    // bitset::none();
    // std::cout << bs.none() << "\n";
    // bs[1] = 1;
    // std::cout << bs.none() << "\n";

    // bitset::to_string()
    // std::bitset<10> bs2(5);
    // std::string st = bs2.to_string();
    // std::cout << st << "\n";

    // bitset::to_ulong() and bitset::to_ullong()
    std::bitset<10> bs3(5);
    int x = bs3.to_ulong();
    std::cout << x << "\n";

    long long int x2 = bs3.to_ullong();
    std::cout << x << "\n";
}