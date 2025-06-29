#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
    map <string, int> age;

    age["Alice"] = 23;
    age["Bob"] = 18;
    age["Charlie"] = 28;
    age["Eve"] = 22;

    cout << age["Bob"] << endl;
    cout << age["Eve"] << endl;

    cout << age.size() << endl;

    return 0;
}