#include <bits/stdc++.h>
using namespace std;
#define endn '\n'
#define vec vector


pair<int, int> two_pointer(vec<int> a1, vec<int> a2, int x) {
    pair<int, int> ans = {-1, -1};
    
    int i = 0, j = a2.size()-1, len_a1 = a1.size();
    int sum, dif2, dif = INT_MAX;

    while (i < len_a1 && j >= 0) {
        sum = a1[i] + a2[j];
        dif2 = abs(sum - x);
        if (dif2 <= dif) {
            ans = {i, j};
            dif = dif2;
        }
        if (sum <= x) i++;
        else j--;
    }
    return ans;
    // O(n+m)
}


int main() {
    vec<int> a = {1, 2, 3, 4, 5};
    vec<int> a2 = {5, 7, 8, 9, 10};
    int x = 15;
    auto res = two_pointer(a, a2, x);
    cout << res.first << " " << res.second << endn;
}