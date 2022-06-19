// swap (pair overlod)
#include <iostream>
#include <utility>
using namespace std;

int main(void) {
    pair<int, char> foo(10, 'a'), bar(90, 'z');

    swap(foo, bar);

    cout <<"foo contains: " <<foo.first;
    cout <<" and " <<foo.second <<endl <<endl;;

    cout <<"bar contains: " <<bar.first;
    cout <<" and " <<bar.second <<endl;
}