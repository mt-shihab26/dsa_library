#include <iostream>
using namespace std;

class Integer {
    int x;
public:
    void set_data(int a) {
        x = a;
    }
    void show_data() {
        cout << "x = " << x << endl;
    }
    Integer operator++() { //pre increment
        Integer temp;
        temp.x = ++x;
        return temp;
    }
    Integer operator++(int) {
        Integer temp;
        temp.x = x++;
        return temp;
    }
};

int main(void) {
    Integer i1, i2;
    i1.set_data(3);
    i1.show_data();
    i2 = i1++;
    i1.show_data();
    i2.show_data();
    i2 = ++i1;
    i1.show_data();
    i2.show_data();

}