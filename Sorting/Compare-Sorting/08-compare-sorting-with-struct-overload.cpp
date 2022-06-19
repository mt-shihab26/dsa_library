#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define endn '\n'

struct Point {
    int x, y;

    bool operator > (const Point &b) {
        if (x == b.x) return x < b.y;
        return x > b.x;
    }
};

void insertion_sort(vec<Point> &arr) {
    int i, j, n = arr.size();
    for (i = 0; i < n; i++) {
        for (j = i-1; j >= 0; j--) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
            else {
                break;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vec<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    insertion_sort(points);

    for (int i = 0; i < n; i++) {
        cout << points[i].x << " " << points[i].y << endn;
    }
    return 0;
}

/*
5
5 6
3 3
1 1
1 6
5 1
*/
