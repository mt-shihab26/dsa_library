#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node *pre = nullptr;
    Node(T data, Node *pre)
    {
        this->data = data;
        this->pre = pre;
    }
};

template <typename T>
class Stack
{
    Node<T> *_top = nullptr;
    long long int _size = 0;

public:
    void push(T item)
    {
        Node<T> *node = new Node<T>(item, _top);
        _top = node;
        _size++;
    }
    void pop()
    {
        Node<T> *pre = _top->pre;
        delete _top;
        _top = pre;
        _size--;
    }
    T top() { return _top->data; }
    bool empty() { return _top == nullptr; }
    long long int size() { return _size; }
};

int main()
{
    Stack<int> st;

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
            if (st.empty())
            {
                cout << "Stack is empty()\n";
                continue;
            }
            st.pop();
        }
        else
        {
            if (st.empty())
            {
                cout << "Stack is empty()\n";
                continue;
            }
            cout << st.top() << endl;
        }
    }
}