#include <fstream>
using namespace std;

int main(){
	ifstream fin("input.txt");
	ofstream fout("output.txt");

	int a, b, c;

	fin >> a >> b >> c;

	fout << "sum is " << a + b + c << "\n";
}
