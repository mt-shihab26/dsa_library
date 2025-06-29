#include <iostream>
using namespace std;


struct book {
    int book_id;
    char title[20];
    float price;
};

book input();
void display(book);

int main(void) {
    book b1;
    b1 = input();

    display(b1);    

    return 0;
}

book input() {
    book b;
    cout << "Enter book_id, title and price of book: ";
    cin >> b.book_id >> b.title >> b.price;
    return b;
}

void display(book b) {
    cout << endl << b.book_id << endl << b.title << endl << b.price << endl;
}