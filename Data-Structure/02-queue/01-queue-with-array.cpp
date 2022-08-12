#include <bits/stdc++.h>
using namespace std;
#define ed '\n'

class Queue
{
    int *_data;
    int _front;
    int _back;
    int _size;
    int _capacity;

public:
    Queue(int capacity)
    {
        _data = new int[capacity];
        _front = 0;
        _back = -1;
        _size = 0;
        _capacity = capacity - 1;
    }
    ~Queue()
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

int main()
{
    Queue q(10);
    q.push(100);
    q.push(200);
    cout << q.front() << ed;
    cout << q.front() << ed;
    q.pop();
    cout << q.front() << ed;
    q.pop();
    cout << q.front() << ed;
    q.push(100);
    q.push(200);
    cout << q.front() << ed;
    q.pop();
    cout << q.front() << ed;
}
