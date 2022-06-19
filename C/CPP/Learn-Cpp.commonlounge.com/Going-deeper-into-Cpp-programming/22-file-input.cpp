#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    // Declare the varialbe and open the file
    ifstream input_file;
    input_file.open("super_temp.txt");

    // Read from the file
    string text;
    input_file >> text;
    // Just like "cin >> text;"
    cout << text << endl;

    getline(input_file, text);
    cout << text << endl;

    // close the file once done
    input_file.close();

    return 0;
}