#include <iostream>
using namespace std;

class student {
    string name;
    int age;

public:
    void set_student(string s, int a) {
        name = s;
        age = a;
    }
    void show_student() {
        cout << "Name: " << name;
        cout << " Age: " << age << endl;
    }
};

int main(void) {
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;
    pair<int, student> p4;

    p1 = make_pair("Rahul", 16);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Drilling C++ STL", 432.3);
    student s1;
    s1.set_student("Shihab", 19);
    p4 = make_pair(1, s1);
    cout << "Pair 1: ";
    cout << p1.first << " " << p1.second << endl;
    cout << "Pair 2: ";
    cout << p2.first << " " << p2.second << endl;
    cout << "Pair 3: ";
    cout << p3.first << " " << p3.second << endl;
    cout << "Pair 4: ";
    cout << p4.first << " ";
    student s2 = p4.second;
    s2.show_student();
}
