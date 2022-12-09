#include <iostream>
#include <bitset>

int main(void) {

    // declaration
    std::bitset<10> bs;
    std::cout << bs << "\n";

    std::bitset<15> bs2(5);
    std::cout << bs2 << "\n";

    std::bitset<20> bs3("101");
    std::cout << bs3 << "\n";

    // accessing elements
    std::cout << bs2 << "\n";
    std::cout << bs2[0] << " " << bs2[1] <<" " << bs2[2] <<  "\n";

    
}