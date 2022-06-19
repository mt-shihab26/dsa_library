#include <iostream>
using namespace std;

int main() {
    // int
    int sum1 = 100 + 50;    // 150 (100 + 50)
    int sum2 = sum1 + 250;  // 400 (150 + 250)
    int sum3 = sum2 + sum2; // 800 (400 + 400)
    cout <<"int: " <<sum1 <<" " <<sum2 <<" " <<sum3 <<"\n";
    // double
    double sumd1 = 100.50 + 30.23;
    double sumd2 = sumd1 + 250.53;
    double sumd3 = sumd2 + sumd2;
    cout <<"double: " <<sumd1 <<" " <<sumd2 <<" " <<sumd3 <<"\n";
    // char
    char xcc = '3'; // '3' = 51
    char ycc = '5'; // '5' = 53
    char sum_c = xcc + ycc; // 51 + 53 = 104 -> 'h'
    cout <<sum_c <<"\n";
    // string
    string xstr = "Hello ";
    string ystr = "World";
    string sum_str = xstr + ystr; // concataneted
    cout <<sum_str <<"\n";    

}