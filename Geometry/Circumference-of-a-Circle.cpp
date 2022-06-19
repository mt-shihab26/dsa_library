// CPP program to find circumference of circle
#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);
double circumference(double r){
    double cir = 2 * PI * r;
    return cir;
}

int main() {
    double r = 5;
    cout << "Circumference = " << circumference(r);
    return 0;
}
