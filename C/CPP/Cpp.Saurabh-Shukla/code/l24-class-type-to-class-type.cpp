#include <iostream>
using namespace std;

class Product {
    int m, n;
public:
    void set_data(int x, int y) {
        m = x;
        n = y;
    }
    int get_m() {
        return m;
    }
    int get_n() {
        return n;
    }
};

class Item {
    int a, b;
public:
    void show_date() {
        cout << "a = " << a << " b = " << b << endl;
    }
    Item () {} // constructor
    Item (Product c) {
        a = c.get_m();
        b = c.get_n();
    }
};

int main(void) {
    Item i1;
    Product p1;
    p1.set_data(3, 4);
    i1 = p1;
    i1.show_date();
    return 0;
}