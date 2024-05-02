#include <bits/stdc++.h>

using namespace std;

class Node
{
  public:
    int value;
    Node *next;
    Node()
    {
    }
    Node(int value, Node *next)
    {
        this->value = value;
        this->next = next;
    }
};

class SinglyLinkedList
{
  private:
    Node *head = nullptr;
    int last_position = 0;

  public:
    SinglyLinkedList()
    {
        this->head = nullptr;
    }

    bool empty()
    {
        return this->head == nullptr;
    }

    void push(int value, int position = -1)
    {
        if (position == -1)
        {
            Node *node = new Node(value, nullptr);
            if (this->empty())
            {
                this->head = node;
                return;
            }
            Node *last = this->head;
            while (last->next != nullptr)
            {
                last = last->next;
            }
            (*last).next = node;
            return;
        }
        if (position == 0)
        {
            Node *node = new Node(value, this->head);
            this->head = node;
        }
    }

    void pop()
    {
        if (this->empty())
        {
            return;
        }
        if (this->head->next == nullptr)
        {
            delete this->head;
            this->head = nullptr;
            return;
        }
        Node *second_last = this->head;
        while (second_last->next->next != nullptr)
        {
            second_last = second_last->next;
        }
        delete second_last->next;
        second_last->next = nullptr;
    }

    void pop_front()
    {
        if (this->empty())
        {
            return;
        }
        Node *first = this->head;
        this->head = head->next;
        delete first;
    }

    void print()
    {
        if (this->empty())
        {
            return;
        }
        Node *last = this->head;
        while (last->next != nullptr)
        {
            cout << last->value << " -> ";
            last = last->next;
        }
        cout << last->value << "\n";
    }
};

int main()
{
    SinglyLinkedList list;

    list.push(21);
    list.push(22);

    list.print();

    list.pop_front();

    list.print();

    list.pop_front();
    list.pop_front();

    list.print();
}
