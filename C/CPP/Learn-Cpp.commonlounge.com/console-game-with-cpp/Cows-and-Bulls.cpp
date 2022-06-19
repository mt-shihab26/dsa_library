#include <iostream>
using namespace std;

string genarate_secret_num(int lower, int upper) {
    srand(time(0));
    int secret = ((rand() % (upper - lower + 1)) + lower);
    return to_string(secret);
}

int main() {
    string secret_num = genarate_secret_num(1000, 9999);
    string guess_num, main_guess;

    cout << "Secret number chosen (between 1000 and 9999)\nStart guessing! ..." << endl;

    int i = 1, bulls, cows, j, k;
    while (true) {
        cout << "Guess>>> ";
        cin >> guess_num;
        main_guess = guess_num;
        if (guess_num.length() != 4) {
            cout << "Invalid Input!" << endl;
            continue;
        }

        bulls = 0;
        cows = 0;
        for (j=0; j<4; j++) {
            if (secret_num[j] == guess_num[j]) {
                bulls++;
                // secret_num[j] = 'a';
                guess_num[j] = 'a';
            }
            // else {
            //     cows++;
            // }
        }
        for (j=0; j<4; j++) {
            if (guess_num[j] != 'a') {
                for (k=0; k<4; k++) {
                    if (secret_num[k] == guess_num[j]) {
                        cows++;
                        break;
                    }
                }
            }
        }

        if (bulls == 4) {
            cout << "Congratulations, you did it!\nYou took " << i << " to guess the number" << endl;
            cout << "Secret number is " << secret_num << endl;
            break;
        }
        else {
            cout << "Turn " << i << ": ";
            cout << "Your guess " << main_guess << " has " << bulls << " bulls and " << cows << " cows" << endl;
        }
        i++;
    }

    return 0;
}