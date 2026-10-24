// Find the pair of two number in sorted array whose the difference is equal to x

#include <bits/stdc++.h>
using namespace std;

void two_pointer(vector<int> numbers, int target) {
    sort(numbers.begin(), numbers.end());
    int i = 0, j = 1, len = numbers.size()-1, dif;
    while (i <= len && j <= len) {
        dif = numbers[j] - numbers[i];
        if (dif == target && i != j) {
            cout << numbers[i] << " " << numbers[j] << "\n";
            i++, j++;
        }
        else if (dif < target) j++;
        else i++;
    }
}

int main() {
    vector<int> a = {3,1,4,1,5};
    sort(a.begin(), a.end());
    two_pointer(a, 1);
}
