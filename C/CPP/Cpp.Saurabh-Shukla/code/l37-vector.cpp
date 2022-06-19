#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector <int> v {10, 20, 30, 40, 50};

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    vector <int>::iterator it=v.begin();

    v.insert(it+2, 25);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    
    return 0;
}