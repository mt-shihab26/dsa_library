#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int secret_num = (rand() % 100) + 1;
    cout << "Secret number chosen (between 1 and 100" << endl;
    cout << "start guessing! ..." << endl;
    int input = 102;
    int step = 0;
    
    while (input != secret_num) {
        cin >> input;
        if (input < secret_num) {
            cout << "You're too cold!.";
        }
        else if (input > secret_num) {
            cout << "You're too hot!.";
        }
        step++;
        if (input != secret_num) 
            cout << "\tStep: " << step << endl;
    }
    cout << "Congratulations, you did it!";
    cout << "\tStep: " << step << endl;
    cout << "Secet number is " << secret_num << endl;
    cout << "Step needed: " << step << endl;
    return 0;
}