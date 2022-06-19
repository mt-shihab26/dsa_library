#include <iostream>
using namespace std;


struct book {
    int book_id;
    char title[20];
    float price;
};

book input();

int main(void) {
    book b1;
    b1 = input();

    cout << b1.book_id << b1.title << b1.price;
    

    return 0;
}

book input() {
    book b;
    cout << "Enter book_id, title and price of book: ";
    cin >> b.book_id >> b.title >> b.price;
    return b;
}