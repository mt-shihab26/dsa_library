#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next_p;
    Node(int value)
    {
        this->value = value;
        this->next_p = nullptr;
    }
};

class Queue
{
    Node *_top;
    Node *_last;
    size_t _len;

public:
    Queue()
    {
        _top = nullptr;
        _last = nullptr;
        _len = 0;
    }
    ~Queue()
    {
        while (true)
        {
            if (_top == nullptr)
                break;
            Node *next_top = _top->next_p;
            delete _top;
            _top = next_top;
        }
    }
    void push(int value)
    {
        Node *node = new Node(value);
        if (this->empty() == true)
        {
            _top = node;
            _last = node;
        }
        else
        {
            _last->next_p = node;
            _last = node;
        }
        _len++;
    }
    int pop()
    {
        if (this->empty() == true)
            throw "The queue is empty";

        int value = _top->value;
        Node *next_top = _top->next_p;

        delete _top;

        _top = next_top;
        _last = _top == nullptr ? nullptr : _last;
        _len--;

        return value;
    }
    int top()
    {
        if (this->empty() == true)
            throw "The queue is empty";
        return _top->value;
    }
    bool empty() { return _top == nullptr; }
    size_t len() { return _len; }
};

int main()
{
    Queue queue;
    try
    {
        queue.push(10);
        queue.push(20);
        queue.push(30);
        cout << queue.len() << "\n";
        cout << queue.top() << "\n";
        cout << queue.pop() << "\n";
        cout << queue.pop() << "\n";
        cout << queue.top() << "\n";
        cout << queue.pop() << "\n";
        cout << queue.len() << "\n";
        queue.push(100);
        cout << queue.top() << "\n";
        cout << queue.len() << "\n";
        cout << boolalpha << queue.empty() << "\n";
        cout << queue.pop() << "\n";
        cout << boolalpha << queue.empty() << "\n";
        cout << boolalpha << queue.empty() << "\n";
    }
    catch (...)
    {
        cout << "Default Exception\n";
    }
}