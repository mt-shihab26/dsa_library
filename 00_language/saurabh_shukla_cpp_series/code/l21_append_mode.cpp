#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    ofstream fout;
    fout.open("myfilebin.txt", ios::app | ios::binary);
    
}