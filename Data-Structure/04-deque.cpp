#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '

template <typename T>
class Node
{
public:
    T value;
    Node<T> *next, *pre;

    Node(T value)
    {
        this->value = value;
        this->next = this->pre = nullptr;
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
        this->_front = this->_back = nullptr;
        this->_size = 0;
    }
    ~Deque()
    {
        while (_front != nullptr)
        {
            cerr << _front->value << gp;
            Node<T> *next_node = this->_front->next;
            delete this->_front;
            this->_front = next_node;
        }
        cerr << ed;
    }
    void push_back(T value)
    {
        Node<T> *node = new Node<T>(value);
        if (_back == nullptr)
            this->_front = this->_back = node;
        else
        {
            this->_back->next = node;
            node->pre = this->_back;
            this->_back = node;
        }
        this->_size++;
    }
    void push_front(T value)
    {
        Node<T> *node = new Node<T>(value);
        if (this->_front == nullptr)
            this->_front = this->_back = node;
        else
        {
            node->next = this->_front;
            this->_front = node;
        }
        this->_size++;
    }

    void pop_back()
    {
        Node<T> *pre_node = this->_back->pre;
        delete this->_back;
        this->_back = pre_node;
        this->_back->next = nullptr;
        this->_size--;
    }

    void pop_front()
    {
        Node<T> *next_node = this->_front->next;
        delete this->_front;
        this->_front = next_node;
        this->_size--;
    }

    inline T front() { return this->_front->value; }
    inline T back() { return this->_back->value; }
    inline size_t size() { return this->_size; }
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