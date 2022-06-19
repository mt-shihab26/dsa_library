// Find the pair in Array Whose sum is closest to x
/*
    Given A array of N number find the pair whose sum is closest to X
    With O(N) complexity.
*/


#include <bits/stdc++.h>
using namespace std;


pair<int, int> brute_force(vector<int> a, int x) {
    int n = a.size(), dif = INT_MAX, dif2;
    pair<int, int> ans = {-1, -1};
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            dif2 = abs((a[i]+a[j]) - x);
            if (dif2 <= dif) {
                ans = {i, j};
                dif = dif2;
            }
        }
    }
    return ans;
    // O(n^2)
}


pair<int, int> two_pointer(vector<int> a, int x) {
    pair<int, int> ans = {-1, -1};
    int i = 0, j = a.size()-1, sum, dif = INT_MAX, dif2;
    while (i < j) {
        sum = a[i] + a[j];
        dif2 = abs(sum - x);
        if (dif2 <= dif) {
            ans = {i, j};
            dif = dif2;
        }
        if (sum == x) return ans;
        if (sum < x) i++;
        else j--;
    }
    cout << "\n";
    return ans;
    // O(n)
}
/*
1 + 10 = 11 -> 11 - 7 = 4
1 + 7 = 8 -> 8 - 7 = 1;
1 + 4 = 5 -> 5 - 7 = 2;
3 + 4 = 7 -> 7 - 7 = 0;
*/


int main() {
    vector<int> a = {1, 3, 4, 7, 10};
    auto value = two_pointer(a, 7);
    cout << value.first << " " << value.second << "\n";
}