#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define endn '\n'

struct Point {
    int x, y;
};

bool cmp(Point &a, Point &b) {
    if (a.x == b.x) return a.y > b.y;
    return a.x < b.x;
}

int main() {
    int n;
    cin >> n;
    vec<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points.begin(), points.end(), cmp);

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
