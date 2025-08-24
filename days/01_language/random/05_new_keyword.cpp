#include <bits/stdc++.h>
using namespace std;

class Entity
{
    string _name;

public:
    Entity() : _name("Unknown") {}
    Entity(const string &name) : _name(name) {}
    const string get_name() const { return _name; }
};

int main()
{
    int a = 2;
    int *b = new int[50]; // 200 bytes

    Entity *e = new Entity();
    Entity *e2 = (Entity *)malloc(sizeof(Entity));
    Entity *e3 = new (e) Entity();
    // new is a operator (like: +, -, /)
    // behind the seen new use c's malloc()
    // function to allocate memory in head

    cout << e << " " << e3 << " " << (e == e3) << "\n";

    delete[] b;
    delete e;
    free(e2);
    // delete is a operator (like: +, -, /)
    // behind the seen delete use c's free()
    // to release the allocated memory from head
}