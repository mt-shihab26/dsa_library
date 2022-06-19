#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("output.txt", "w", stdout);
	// cin reads from the file instead of standard input
	int a, b, c;
	cin >> a >> b >> c;
	// cout prints to the file instead of standard output
	cout << "sum is " << a + b + c << "\n";


	int a2, b2, c2;
	scanf("%d %d %d", &a2, &b2, &c2);
	printf("sum is %d\n", a2+b2+c2);
}