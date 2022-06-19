#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("myfile.txt");
    string text = "The quick brown fox jumps over the lazy dog";

    file << text << endl;

    file.close();

    return 0;
}