// pair::swap()
#include <iostream>
#include <utility>
using namespace std;

int main(void) {
    pair<int, char> foo(10, 'a'), bar(90, 'z');

    foo.swap(bar);

    cout <<"foo contains: " <<foo.first;
    cout <<" and " <<foo.second <<endl <<endl;


    cout <<"bar contains: " <<bar.first;
    cout <<" and " <<bar.second <<endl;

}