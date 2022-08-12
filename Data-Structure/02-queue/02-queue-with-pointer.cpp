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
    Node *_front;
    Node *_back;
    int _capacity;

public:
    Queue()
    {
        _front = nullptr;
        _back = nullptr;
        _capacity = 0;
    }
    ~Queue()
    {
        while (true)
        {
            if (_front == nullptr)
                break;
            Node *next_top = _front->next_p;
            delete _front;
            _front = next_top;
        }
    }
    void push(int value)
    {
        Node *node = new Node(value);
        if (this->empty() == true)
        {
            _front = node;
            _back = node;
        }
        else
        {
            _back->next_p = node;
            _back = node;
        }
        _capacity++;
    }
    int pop()
    {
        if (this->empty() == true)
            throw "The queue is empty";

        int value = _front->value;
        Node *next_top = _front->next_p;

        delete _front;

        _front = next_top;
        _back = _front == nullptr ? nullptr : _back;
        _capacity--;

        return value;
    }
    int top()
    {
        if (this->empty() == true)
            throw "The queue is empty";
        return _front->value;
    }
    bool empty() { return _front == nullptr; }
    int size() { return _capacity; }
};

int main()
{
    Queue queue;
    try
    {
        queue.push(10);
        queue.push(20);
        queue.push(30);
        cout << queue.size() << "\n";
        cout << queue.top() << "\n";
        cout << queue.pop() << "\n";
        cout << queue.pop() << "\n";
        cout << queue.top() << "\n";
        cout << queue.pop() << "\n";
        cout << queue.size() << "\n";
        queue.push(100);
        cout << queue.top() << "\n";
        cout << queue.size() << "\n";
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