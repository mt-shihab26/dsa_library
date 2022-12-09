#include <iostream>
#include <string.h>
using namespace std;

class Student {
    int roll_no;
    char name[20];
    class Address {
        int house_no;
        char stareet[20];
        char city[20];
        char state[20];
        char pincode[7];
    public:
        void set_address_A(int h, char *s, char *c, char *st, char *p) {
            house_no = h;
            strcpy(stareet, s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
        }
        void show_address() {
            cout << house_no << endl;
            cout << stareet << endl;
            cout << pincode << endl;
            cout << state << endl;
        }
    };
    Address add;

public:
    void set_rool_no(int r) {
        roll_no = r;
    }
    void set_name(char *n) {
        strcpy(name, n);
    }
    void set_address_S(int h, char *s, char *c, char *st, char *p) {
        add.set_address_A(h, s, c, st, p);
    }
    void show_student() {
        cout << "Student Data" << endl;
        cout << roll_no << " ";
        cout << name << " ";
        add.show_address();
    }
};

int main(void) {
    Student s1;
    s1.set_rool_no(100);
    s1.set_name("Rahul");
    s1.set_address_S(301, "hanuma goli", "bhopal", "2342342", "MP");
    s1.show_student();

    return 0;
}
