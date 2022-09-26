#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;

    Node(int _value)
    {
        value = _value;
        next = nullptr;
    }
};

class SinglyLinkedList
{
    Node *_head;
    size_t _size;

public:
    SinglyLinkedList()
    {
        _head = nullptr;
    }

    ~SinglyLinkedList()
    {
    }

    bool is_empty()
    {
        return _head == nullptr;
    }

    void push_front(int value)
    {
        Node *node = new Node(value);
        if (is_empty() == false)
            node->next = _head;
        _head = node;
        _size++;
    }
};

int main()
{
}