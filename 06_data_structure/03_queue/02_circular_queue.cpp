#include <bits/stdc++.h>

class CircularQueue
{
    int *arr = nullptr, _back, _front, _capacity, _size;

public:
    CircularQueue(int size)
    {
        arr = new int[size];
        _back = -1;
        _capacity = size;
        _front = 0;
        _size = 0;
    }
    ~CircularQueue()
    {
        delete[] arr;
    }
    void push(int item)
    {
        if (_size == _capacity)
        {
            std::cout << "Queue is full\n";
            return;
        }
        _back = (_back + 1) % _capacity;
        _size++;
        arr[_back] = item;
    }
    int pop()
    {
        int value = arr[_front];
        _size--;
        _front = (_front + 1) % _capacity;
        return value;
    }
    int front_it() { return _front; }
    int back_it() { return _back; }
    bool is_empty() { return _size == 0; }
};

int main()
{
    CircularQueue q(3);
    q.push(10); // 10 20 30
    q.push(20);
    q.push(30);
    std::cout << q.front_it() << " " << q.back_it() << "\n"; // 0 2
    std::cout << q.pop() << "\n";
    q.push(40);                                              // 40 20 30
    std::cout << q.front_it() << " " << q.back_it() << "\n"; // 1 0
    std::cout << q.pop() << "\n";
    q.push(50);                                              // 40 50 30
    std::cout << q.front_it() << " " << q.back_it() << "\n"; // 2 1
}