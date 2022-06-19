#include <iostream>
using namespace std;

class Box {
    int l, b, h;
public:
    void set_dimension(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void show_dimension() {
        cout << "l = " << l << " b = " << b << " h = " << h << endl;
    }
};

int main(void) {
    Box small_box;
    
    small_box.set_dimension(12, 10, 5);
    small_box.show_dimension();
    return 0;
}