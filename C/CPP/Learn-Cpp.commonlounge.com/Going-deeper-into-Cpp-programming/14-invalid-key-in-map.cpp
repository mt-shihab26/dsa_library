#include<iostream>
#include<string>
#include<iterator>
#include<map>
using namespace std;

void display_map(map <string, int> m) {
    map <string, int> :: iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
}

int main() {
    map <string, int> age;

    age["Alice"] = 23;
    age["Bob"] = 18;
    age["Charlie"] = 28;
    age["Eve"] = 22;

    cout << age["ThisWasNeverInserted"] << endl;
    // Output - 0

    display_map(age);

    return 0;
}