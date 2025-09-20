#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int _data) {
        data = _data;
        next = nullptr;
    }
    Node(int _data, Node *_next) {
        data = _data;
        next = _next;
    }
};

class CircularLinkedList {
    Node *head;

  public:
    CircularLinkedList() {
        head = nullptr;
    }
    void insert(int data) {
        auto node = new Node(data, head);
        if (head == nullptr) {
            head = node;
            return;
        }
        auto curr = head;
        while (curr->next != nullptr) {
            curr = head->next;
        }
        curr->next = node;
    }
    void print() {
        auto curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = head->next;
        }
    }
};

int main() {
    auto list = new CircularLinkedList();

    cout << "Testing insertion operations\n";
    list->insert(10);
    list->print();

    list->insert(20);
    list->print();

    // list->insert(1, 15);
    // list->print();

    list->insert(5);
    list->print();
    //
    // list->insertTail(30);
    // list->insertTail(40);
    // list->print();
    //
    // cout << "\nTesting size and search\n";
    // cout << "list size: " << list->size() << endl;
    // cout << "search for 15: " << list->search(15) << endl;
    // cout << "search for 100: " << list->search(100) << endl;
    // cout << "is empty: " << (list->empty() ? "yes" : "no") << endl;
    //
    // cout << "\nTesting deletion operations\n";
    // list->remove();
    // cout << "After deleting head: ";
    // list->print();
    //
    // list->removeTail();
    // cout << "After deleting tail: ";
    // list->print();
    //
    // list->remove(0);
    // cout << "After deleting at position 0: ";
    // list->print();
    //
    // list->remove(1);
    // cout << "After deleting at position 1: ";
    // list->print();
    //
    // cout << "\nTesting more insertions after deletions:\n";
    // list->insertTail(50);
    // list->insertTail(60);
    // list->insertTail(70);
    // cout << "After adding more elements: ";
    // list->print();
    //
    // cout << "\nTesting clear operation:" << endl;
    // list->clear();
    // cout << "After clear: ";
    // list->print();
    // cout << "Is empty: " << (list->empty() ? "Yes" : "No") << endl;
    //
    // delete list;

    return 0;
}
