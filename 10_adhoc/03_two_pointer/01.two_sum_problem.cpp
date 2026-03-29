// Find the pair in Array Whose sum is equal to x
/*
    Given A array of N number find the pair whose sum is equal to X
    With O(N) complexity.
*/

#include <bits/stdc++.h>
using namespace std;


pair<int, int> brute_force(vector<int> a, int x) {
    int i, j, n = a.size();
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] + a[j] == x) return {i, j};
        }
    }
    return {-1, -1};
    // O(n^2)
}


pair<int, int> two_pointer(vector<int> a, int x) {
    int i = 0, j = a.size()-1, sum;
    while (i < j) {
        sum = a[i] + a[j];
        if (sum == x) return {i, j};
        else if (sum > x) j--;
        else if (sum < x) i++;
    }
    return {-1, -1};
    // O(n)
}


int main() {
    vector<int> a = {1, 2, 3, 5, 6, 10};
    sort(a.begin(), a.end());
    auto indexs = two_pointer(a, 10);
    cout << indexs.first << " " << indexs.second << "\n";
}