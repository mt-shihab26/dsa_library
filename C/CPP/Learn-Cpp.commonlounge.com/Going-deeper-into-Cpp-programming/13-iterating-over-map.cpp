#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

void display_map(map <string, int> m) {
    map <string, int> :: iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
}

void display_map_ero_operator(map <string, int> m) {
    map <string, int> :: iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}

int main(void) {
    map <string, int> age;
    age["Alice"] = 23;
    age["Bob"] = 18;
    age["Charlie"] = 28;
    age["Eve"] = 22;
    display_map_ero_operator(age);

    return 0;
}