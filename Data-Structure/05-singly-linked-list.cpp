// Singly Linked List Implementation

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value, Node *next)
    {
        this->value = value;
        this->next = next;
    }
};

class SinglyLinkedList
{
    Node *head = nullptr;

    bool is_empty()
    {
        return head == nullptr;
    }

public:
    void push_back(int value)
    {
        Node *node = new Node(value, nullptr);

        if (is_empty())
            head = node;
        else
        {
            Node *tmp_head = head;
            while (tmp_head->next != nullptr)
                tmp_head = tmp_head->next;
            tmp_head->next = node;
        }
    }

    void push_front(int value)
    {
        auto node = new Node(value, nullptr);

        if (is_empty())
            head = node;
        else
        {
            node->next = head;
            head = node;
        }
    }

    void push_at(int index, int value)
    {
        auto node = new Node(value, nullptr);
        if (is_empty())
            head = node;
        else
        {
            Node *tmp_head = head;
            for (int i = 1; i < index; i++)
                tmp_head = tmp_head->next;
            node->next = tmp_head->next;
            tmp_head->next = node;
        }
    }

    void print()
    {
        Node *tmp_node = head;
        while (tmp_node != nullptr)
        {
            cout << tmp_node->value << " ";
            tmp_node = tmp_node->next;
        }
        cout << "\n";
    }

    int get_at(int index)
    {
        Node *tmp_head = head;
        for (int i = 1; i <= index; i++)
            tmp_head = tmp_head->next;
        return tmp_head->value;
    }

    void update(int index, int value)
    {
        Node *tmp_head = head;
        for (int i = 1; i <= index; i++)
            tmp_head = tmp_head->next;
        tmp_head->value = value;
    }

    void remove(int index)
    {
        Node *tmp_head = head;
        for (int i = 1; i < index; i++)
            tmp_head = tmp_head->next;
        Node *tmp_next = tmp_head->next->next;
        delete tmp_head->next;
        tmp_head->next = tmp_next;
    }

    void remove_back()
    {
        Node *tmp_head = head;
        while (tmp_head->next->next != nullptr)
            tmp_head = tmp_head->next;
        delete tmp_head->next;
        tmp_head->next = nullptr;
    }

    void remote_front()
    {
        Node *tmp_next = head->next;
        delete head;
        head = tmp_next;
    }

    ~SinglyLinkedList()
    {
        while (head != nullptr)
        {
            Node *tmp_next = head->next;
            delete head;
            head = tmp_next;
        }
    }
};

int main()
{
    SinglyLinkedList l;

    l.push_back(10);  // in     : 10
    l.push_front(14); // in     : 14 10

    l.push_back(17); // in      : 14 10 17
    l.push_back(19); // in      : 14 10 17 19

    l.push_at(2, 87); // in     : 14 10 87 17 19

    l.print();                   // stdout      : 14 10 87 17 19
    cout << l.get_at(3) << "\n"; // return      : 17

    l.update(3, 77); // in          : 14 10 87 77 19
    l.print();       // stdout      : 14 10 87 77 19

    l.remove(2); // in          : 14 10 77 19
    l.print();   // stdout      : 14 10 77 19

    l.remove_back();
    l.remove_back();
    l.print(); // stdout      : 14 10

    l.remote_front();
    l.print(); // stdout : 10
}
