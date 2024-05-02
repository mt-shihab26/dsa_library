#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool descending(int a, int b) {
    return a > b;
}

bool ascending(string &a, string &b) {
    return a.size() < b.size();
}

// Sorting Funciton Syntax
// sort(container.begin(), container.end(), comparison_function);

int main(void) {
    // Sorting Array
    int arr[] = {1, 7, 4, 2};
    int n = 4;
    // sort (arr, arr+n);
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // Sorting Vector
    vector <int> vec {5, 1, 4, 3};
    sort(vec.begin(), vec.end()); //Sort

    // for (int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    // Sotring in descending order
    // sort(arr, arr+n, greater<int>());
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // Sotring using own comparison function
    // sort(arr, arr+4, descending);
    // for (int i = 0; i < 4; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // return 0;

    // Sotring String

 
    string ass[4] = {"Violet", "Blue", "Red", "Green"};
    sort(ass, ass+4, ascending);
    for (int i = 0; i < 4; i++) {
        cout << ass[i] << " ";
    }
}