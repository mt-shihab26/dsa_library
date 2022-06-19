#include <bits/stdc++.h>
using namespace std;
vector<int> get_randoms(int amount, int first, int last) {vector<int> tmp;srand(time(0));for (int i = 0; i < amount; i++)tmp.push_back(first + ((rand() % (last - first + 1))));return tmp;}
template <typename TP> void print_vector(const TP &vc) {for (auto &ith : vc)cout << ith << " ";cout << '\n';}

template <typename Tp>
int linear_search(vector<Tp> arr, Tp x) {
    int len = arr.size();
    for (int i = 0; i < len; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> arr = get_randoms(20, 1, 20);
    print_vector(arr);

    cout << linear_search(arr, 13) << '\n';
}