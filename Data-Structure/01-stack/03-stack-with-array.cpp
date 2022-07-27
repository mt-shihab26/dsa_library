#include <iostream>
using namespace std;

template <typename T>
class StackWithArray
{
    T st[100005];
    int tp = -1;

public:
    void push(T item) { st[++tp] = item; }

    bool is_empty() { return tp == -1; }

    void pop()
    {
        if (is_empty())
            return;
        tp--;
    }

    T top()
    {
        if (is_empty())
        {
            std::cout << "The stack is empty ";
            return -1;
        }
        return st[tp];
    };
};

int main()
{
    StackWithArray<int> st;

    while (1)
    {
        int action;
        cout << "1 for Push() and 2 for Pop() and 3 for Top()" << endl;
        cin >> action;
        if (action == 1)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (action == 2)
        {
            st.pop();
        }
        else
        {
            cout << st.top() << endl;
        }
    }
}