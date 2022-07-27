#include <bits/stdc++.h>
using namespace std;
#define ed '\n'

class Queue
{
    int *_data;
    int _front;
    int _back;
    int _ct;
    int _size;

public:
    Queue(int size)
    {
        _data = new int[size];
        _front = 0;
        _back = -1;
        _ct = 0;
        _size = size - 1;
    }
    ~Queue()
    {
        delete[] _data;
    }
    void push(int item)
    {
        _back++;
        if (_size < _back)
        {
            cout << "Queue limit exit -1\n";
        }
        _ct++;
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
            _ct--;
        }
    }
    bool empty()
    {
        return _ct == 0;
    }
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
