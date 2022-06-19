#include <bits/stdc++.h>
using namespace std;


//  Function to Calculation Distance between 
//  two Coordinate points A(x1, y1) and B(x2, y2)
double distance(int x1, int y1, int x2, int y2)
{
    double result;
    // Calculating x-axies
    result = pow((x2 - x1), 2);
    // Calculating y-axies and sum them
    result += pow((y2 - y1), 2);
    // Make square root for sum value
    result = sqrt(result);
    return result;
}


int main(void)
{
    int x1, y1, x2, y2;

    // Get input
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    // call distance betwwen tow coordinate points
    cout << "Distance between A(x1, y1) and B(x2, y2) is: ";
    cout << distance(x1, y1, x2, y2) <<"\n"; 
}