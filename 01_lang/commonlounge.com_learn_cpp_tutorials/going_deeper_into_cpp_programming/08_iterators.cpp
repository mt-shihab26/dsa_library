#include<iostream>
#include<vector>
#include <iterator>
using namespace std;

int main() {
    vector <int> lottery;   // Empty vector of with elements of type "int"
    lottery.push_back(3);   // vector is now {3}
    lottery.push_back(42);  // vector is now {3, 42}
    lottery.push_back(12);  // vector is now {3, 42, 12}
    lottery.push_back(19);  // vector is now {3, 42, 12, 19}
    lottery.push_back(30);  // vector is now {3, 42, 12, 19, 30}
    lottery.push_back(59);  // vector is now {3, 42, 12, 19, 30, 59}
    
    vector <int> :: iterator it;

    for (it = lottery.begin(); it != lottery.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}