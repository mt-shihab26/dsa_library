#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

bool test() {
    string str;
    cin >> str;
    
    int ctn[256] = {0};
    
    for (int i = 0; str[i]; i++) {
        ctn[str[i]]++;
    }
    int odd = 0;
    for (int i = 0; i < 256; i++) {
        if (ctn[i] % 2) {
            odd++;
        }
    }
    if (odd > 1) {
        return false;
    }
    else {
        return true;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        cout << (test() ? "YES" : "NO") << endn;
    }
}
// Solved By: shihab4t
// Wednesday, August 11, 2021 | 12:37:54 PM (BST)
