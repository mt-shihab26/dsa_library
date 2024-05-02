#include <iostream>
using namespace std;

void fill_cup(int &height) {
    height = height + 5;
    cout << height << endl;
}

void fill_cup_with_c(int *height) {
    *height = *height + 5;
    cout << *height << endl;
}

int main() {
    int ht = 0;

    fill_cup(ht);

    cout << ht << endl;

    fill_cup_with_c(&ht);
    
    cout << ht << endl;

    return 0;
}