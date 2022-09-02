#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value) { this->value = value, this->next = nullptr; }
};

class SinglyLinkedList
{
    Node *_head, *_tail;
    size_t _size;

public:
    SinglyLinkedList() { this->_head = nullptr, this->_tail = nullptr; }

    ~SinglyLinkedList()
    {
    }

    bool is_empty() { return this->_head == nullptr, this->_size = 0; }

    void push_front(int value)
    {
        Node *node = new Node(value);
        if (is_empty())
            this->_tail = node;
        else
            node->next = this->_head;
        this->_head = node;
        this->_size++;
    }

    void push_back(int value)
    {
        Node *node = new Node(value);
        if (is_empty())
            this->_head = node;
        else
            this->_tail->next = node;
        this->_tail = node;
        this->_size++;
    }
};

int main()
{
}