#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str[3];
    str[0] = "hello";
    str[1] = "Bangladesh";
    str[2] = "World";

    for (int i = 0; i < 3; i++) {
        cout <<str[i] <<"\n";
    }

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    for (int i = 0; i < 4; i++) {
        cout <<cars[i] <<"\n";
    }

    int my_num[] = {10, 20, 30};
    for (int i = 0; i < 3; i++) {
        cout <<my_num[i] <<"\n";
    }


    string cars2[5] = {"Volvo", "BMW", "Ford"};
    cars2[3] = "Mazda";
    cars2[4] = "Tesla";
    for (int i = 0; i < 5; i++) {
        cout <<cars2[i] <<"\n";
    }


}