// C++ program to illustrate the
// use of tellg()
#include <fstream>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	ifstream fin;
	char ch;

	// Opens the existing file
	fin.open("gfg.txt");

	int pos;
	pos = fin.tellg();
	cout << pos;

	fin >> ch;
	pos = fin.tellg();
	cout << pos;

	fin >> ch;
	pos = fin.tellg();
	cout << pos;

	return 0;
}
