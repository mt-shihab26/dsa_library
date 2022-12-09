#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    ifstream output_file;
    output_file.open("myfile.txt");

    char ch;
    while(!output_file.eof()) {
        ch = output_file.get();
        cout << ch;
    }
    // cout << endl;

    output_file.close();
    return 0;
}