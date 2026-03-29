#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a = 23.1;

    cout << showpoint;
    cout << a << "\n";

    cout << noshowpoint;
    cout << a << "\n";

    double b = 23.22;
    cout << showpoint;
    cout << setprecision(6);
    cout << b << "\n";
    cout << noshowpoint;

    double c = 23.22;
    cout << showpoint;
    cout << fixed;
    cout << setprecision(6);
    cout << c << "\n";

    cout << ":" << setw(15) << "shihab" << ": \n";
}