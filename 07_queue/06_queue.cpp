#include <bits/stdc++.h>
using namespace std;

class QueueWithArray
{
    int *_data;
    int _front;
    int _back;
    int _size;
    int _capacity;

public:
    QueueWithArray(int capacity)
    {
        _data = new int[capacity];
        _front = 0;
        _back = -1;
        _size = 0;
        _capacity = capacity - 1;
    }
    ~QueueWithArray()
    {
        delete[] _data;
    }
    void push(int item)
    {
        _back++;
        if (_capacity < _back)
        {
            cout << "Queue limit exit -1\n";
        }
        _size++;
        _data[_back] = item;
    }
    int front()
    {
        if (empty())
        {
            cout << "Queue is empty ";
            return -1;
        }
        return _data[_front];
    }
    void pop()
    {
        if (!empty())
        {
            _front++;
            _size--;
        }
    }
    bool empty() { return _size == 0; }
    int size() { return _size; }
};

// int main()
// {
//     QueueWithArray q(10);
//     q.push(100);
//     q.push(200);
//     cout << q.front() << ed;
//     cout << q.front() << ed;
//     q.pop();
//     cout << q.front() << ed;
//     q.pop();
//     cout << q.front() << ed;
//     q.push(100);
//     q.push(200);
//     cout << q.front() << ed;
//     q.pop();
//     cout << q.front() << ed;
// }

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
        if (empty() == true)
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
        if (empty() == true)
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