#include <iostream>
using namespace std;

void modify_arr(int arr[]) {
    arr[0] = 100;
}

int main() {
    int array[50];
    array[0] = 10;
    cout << array[0] << endl;
    // output - 10
    modify_arr(array);
    cout << array[0] << endl;
    // Output - 100
    return 0;
}