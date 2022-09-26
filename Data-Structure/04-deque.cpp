#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '

template <typename T>
struct Node
{
    T value;
    Node<T> *next, *pre;

    Node(T _value)
    {
        value = _value;
        next = pre = nullptr;
    }
};

template <typename T>
class Deque
{
    Node<T> *_front, *_back;
    size_t _size;

public:
    Deque()
    {
        _front = _back = nullptr;
        _size = 0;
    }
    ~Deque()
    {
        while (_front != nullptr)
        {
            // cerr << _front->value << gp;
            Node<T> *next_node = _front->next;
            delete _front;
            _front = next_node;
        }
        // cerr << ed;
    }
    void push_back(T value)
    {
        Node<T> *node = new Node<T>(value);
        if (_back == nullptr)
            _front = _back = node;
        else
        {
            _back->next = node;
            node->pre = _back;
            _back = node;
        }
        _size++;
    }
    void push_front(T value)
    {
        Node<T> *node = new Node<T>(value);
        if (_front == nullptr)
            _front = _back = node;
        else
        {
            node->next = _front;
            _front = node;
        }
        _size++;
    }

    void pop_back()
    {
        Node<T> *pre_node = _back->pre;
        delete _back;
        _back = pre_node;
        _back->next = nullptr;
        _size--;
    }

    void pop_front()
    {
        Node<T> *next_node = _front->next;
        delete _front;
        _front = next_node;
        _size--;
    }

    T front() { return _front->value; }
    T back() { return _back->value; }
    size_t size() { return _size; }
};

int main()
{
    Deque<double> dq;

    dq.push_back(10.50);
    dq.push_back(50);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(100);

    cout << dq.front() << ed;
    cout << dq.back() << ed;

    dq.pop_back();
    dq.pop_front();

    cout << dq.front() << ed;
    cout << dq.back() << ed;

    cout << dq.size() << ed;
}