#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    ifstream fin;
    fin.open("abc.txt");
    cout << fin.tellg();
    cout << endl << (char) fin.get();
    cout << endl << fin.tellg();
    fin.seekg(6);
    cout << endl << fin.tellg();
    cout << endl << (char) fin.get();
    cout << endl << fin.tellg();
    fin.seekg(2, ios_base::cur);
    cout << endl << fin.tellg();
}