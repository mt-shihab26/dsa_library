#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector <int> lottery;
	lottery.push_back(3); // vector is now {3}
	lottery.push_back(42); // vector is now {3, 42}
	lottery.push_back(12); // vector is now {3, 42, 12}
	lottery.push_back(19); // vector is now {3, 42, 12, 19}
	lottery.push_back(30); // vector is now {3, 42, 12, 19, 30}
	lottery.push_back(59); // vector is now {3, 42, 12, 19, 30, 59}
	
	cout << lottery.size() << endl;
	for (int i = 0; i < lottery.size(); i++) {
		cout << lottery[i] << " ";
	}
	cout << endl;
	return 0;
}
