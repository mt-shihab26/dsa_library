#include <iostream>
using namespace std;

struct book {
    int book_id;
    char title[20];
    float price;
    void input() {
        cout << "Enter book_id, title and price: ";
        cin >> book_id >> title >> price;
    }
    void display() {
        cout << endl << book_id << " " << title << " " << price << endl;
    }
};

int main(void) {
    book b1;
    b1.input();
    b1.display();

    return 0;
}