// C++ Program to find the area
// of triangle
#include <bits/stdc++.h>
using namespace std;

double find_area(double a, double b, double c)
{
    // Length of sides must be positive
    // and sum of any two sides
    // must be smaller than third side.
    if (a < 0 || b < 0 || c < 0 || 
        (a + b <= c) || a + c <= b || b + c <= a) 
    {
        cout << "Not a valid trianglen";
        return 0;
    }
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


int main()
{
    double a = 3.0;
    double b = 4.0;
    double c = 5.0;

    cout << "Area is " << find_area(a, b, c);
    return 0;
}
