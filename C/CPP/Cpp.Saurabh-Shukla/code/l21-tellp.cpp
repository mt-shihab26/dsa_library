// C++ program illustrating the
// use of tellp()
#include <fstream>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	ofstream fout;
	char ch;

	// Opening the already existing file
	fout.open("gfg.txt", ios::app);
	int pos;
	pos = fout.tellp();
	cout << pos;

	fout << "print it";
	pos = fout.tellp();
	cout << pos;
	fout.close();

	return 0;
}
