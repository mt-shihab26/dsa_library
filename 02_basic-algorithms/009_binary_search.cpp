#include <bits/stdc++.h>
using namespace std;

int binary_search(const vector<int> &arr, int tg) {
    int low = 0, high = arr.size() - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == tg)
            return mid;
        if (arr[mid] > tg)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int binary_search_recursive(const vector<int> &arr, int low, int hight,
                            int tg) {
    if (low > hight)
        return -1;
    int mid = low + ((hight - low) / 2);
    if (arr[mid] == tg)
        return mid;
    else if (arr[mid] < tg)
        return binary_search_recursive(arr, mid + 1, hight, tg);
    return binary_search_recursive(arr, low, mid - 1, tg);
}

int lower_bound(const vector<int> &arr, int x) {
    int low = 0, hight = arr.size() - 1, ans = arr.size(), mid;
    while (low <= hight) {
        mid = low + (hight - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            hight = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int upper_bound(const vector<int> &arr, int x) {
    int low = 0, hight = arr.size() - 1, ans = arr.size(), mid;
    while (low <= hight) {
        mid = low + (hight - low) / 2;
        if (arr[mid] > x) {
            ans = mid;
            hight = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 23, 13, 22, 55, 29};
    cout << binary_search(arr, 13) << '\n';

    vector<int> arr2 = {1, 13, 22, 23, 29, 55};
    cout << binary_search_recursive(arr2, 0, arr2.size() - 1, 29) << '\n';

    vector<int> v = {10, 20, 30, 30, 30, 40, 50};
    cout << lower_bound(v, 20) << '\n';
    cout << lower_bound(v, 25) << '\n';

    vector<int> v2 = {10, 20, 30, 30, 30, 40, 50};
    cout << upper_bound(v2, 20) << '\n';
    cout << upper_bound(v2, 25) << '\n';
}
