#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display_vector(vector <int> v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main(void) {
    // Empty vector of with elements of type "int"
    vector <int> lottery;
    lottery.push_back(3);
    lottery.push_back(42);
    lottery.push_back(12);
    lottery.push_back(19);
    lottery.push_back(30);
    lottery.push_back(59);

    cout << "Befor Sotring: ";
    display_vector(lottery);

    sort(lottery.begin(), lottery.end());

    cout << "After Sotring: ";
    display_vector(lottery);
    return 0;
}
