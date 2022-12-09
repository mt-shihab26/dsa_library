#include <iostream>
#include <string>
using namespace std;

int main()
{
    // if statement
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x is greater than y"
             << "\n";
    }

    // else statement
    int time = 20;
    if (time < 18){
        cout << "Good day." << "\n";
    }
    else {
        cout << "Good evening." << "\n";
    }

    // else if statement
    int t = 22;
    if (t < 10) {
        cout << "Good morning." <<"\n";
    }
    else if (t < 20) {
        cout << "Good day." <<"\n";
    }
    else {
        cout << "Good evening." <<"\n";
    }

    // Short Hand If...Else (Ternary Operator)
    int tm = 20;
    string result = (tm < 18) ? "Good day." : "Good evening.";
    cout <<result <<"\n";
}
