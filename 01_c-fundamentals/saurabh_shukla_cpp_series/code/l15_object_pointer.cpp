#include <iostream>
using namespace std;

class Box {
    int l, b, h;
public:
    void set_dimension(int x, int y, int z) {
        l = x;
        b = y;
        h = z;
    }
    void show_dimension() {
        cout << "l = " << l << " b = " << b << " h = " << h << endl;
    }
};

int main(void) {
    Box *p, small_box;
    p = &small_box;

    p->set_dimension(12, 10, 5);
    p->show_dimension();

    return 0;
}