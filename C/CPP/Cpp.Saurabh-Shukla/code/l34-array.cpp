#include <iostream>
#include <array>
using namespace std;

inline void display(array<int, 4> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

int main(void)
{
    array<int, 4> odd_numers;
    display(odd_numers);
    odd_numers[0] = 1;
    display(odd_numers);
    odd_numers[1] = 3;
    display(odd_numers);
    odd_numers[2] = 5;
    display(odd_numers);
    odd_numers[3] = 7;
    display(odd_numers);

}