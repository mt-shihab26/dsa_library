#include <iostream>
#include <vector>
using namespace std;

void display_vector (vector <int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(void) {
	vector <int> lottery;
	lottery.push_back(3); // vector is now {3}
	lottery.push_back(42); // vector is now {3, 42}
	lottery.push_back(12); // vector is now {3, 42, 12}
	lottery.push_back(19); // vector is now {3, 42, 12, 19}
	lottery.push_back(30); // vector is now {3, 42, 12, 19, 30}
	lottery.push_back(59); // vector is now {3, 42, 12, 19, 30, 59}
	display_vector(lottery);
	cout << "Size: " << lottery.size() << endl;

	lottery.pop_back();
	display_vector(lottery);
	lottery.pop_back();
 	display_vector(lottery);
	cout << "Size: " << lottery.size() << endl;
	
	return 0;
}
