#include <bits/stdc++.h>
using namespace std;
vector<int> get_randoms(int amount, int first, int last) {
    vector<int> t;
    srand(time(0));
    for (int i = 0; i < amount; i++)
        t.push_back(first + ((rand() % (last - first + 1))));
    return t;
}
template <typename Tp>
void print(Tp &a) {
    for (auto &ith : a)
        cout << ith << " ";
    cout << '\n';
}



void quick_sort(vector<int> &a, int low, int high) {
    if (low >= high) return;

    int pivot = low;
    for (int i = low; i < high; i++) {
        if (a[i] < a[high]) 
            swap(a[i], a[pivot++]);
    }
    swap(a[pivot], a[high]);

    quick_sort(a, low, pivot-1);
    quick_sort(a, pivot+1, high);
}



int main() {
    vector<int> a = get_randoms(10, 1, 20);

    print(a);

    quick_sort(a, 0, a.size()-1);
    
    print(a);
}