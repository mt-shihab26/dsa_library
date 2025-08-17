#include <bits/stdc++.h>

using namespace std;

struct Node {
    Node *prev;
    int data;
    Node *next;
};

class DoublyLinkedList {
  private:
    Node *head;
    Node *tail;

  public:
    void insertAtHead(int data) {
        auto node = new Node();
        node->data = data;

        // if list empty
        if (head == nullptr) {
            head = node;
            tail = node;
            return;
        }

        // 10
        // 20 <-> 10
        head->prev = node;
        node->next = head;
        head = node;
    }

    void insertAtTail(int data) {
        auto node = new Node();
        node->data = data;

        // if list empty
        if (head == nullptr) {
            head = node;
            tail = node;
            return;
        }

        // 20 <-> 10
        // 20 <-> 10 <-> 30

        tail->next = node;

        node->prev = tail;

        tail = node;
    }

    void insertAtPosition(int index, int data) {
        auto node = new Node();
        node->data = data;

        // if list empty
        if (head == nullptr) {
            throw "List not found";
        }

        auto i = head;
        int y = index;

        while (i != nullptr && y > 0) {
            i = i->next;
            y--;
        }

        if (y != 0) {
            throw "List not found";
        }

        // 20 <-> 10 <-> 30 <-> 40
        // 20 <-> 10 <-> 25 <-> 30 <-> 40
        // cout << i->data << "\n"; // 30

        i->prev->next = node;

        node->prev = i->prev;
        node->next = i;

        i->prev = node;
    }

    void deleteAtHead() {
        if (head == nullptr) {
            return;
        }
        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }
        auto next = head->next;
        delete head;
        head = next;
        head->prev = nullptr;
    }

    void deleteAtTail() {
        if (tail == nullptr) {
            return;
        }
        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }
        auto prev = tail->prev;
        delete tail;
        tail = prev;
        tail->next = nullptr;
    }

    void deleteAtPosition(int index) {
        if (head == nullptr) {
            return;
        }
        auto i = head;
        auto y = index;
        while (i != nullptr && y > 0) {
            i = i->next;
            y--;
        }
        if (y != 0) {
            return;
        }
        // 10 <-> 25 <-> 30
        auto prev = i->prev;
        auto next = i->next;

        if (prev == nullptr) {
            head = next;
        } else {
            prev->next = next;
        }
        if (next == nullptr) {
            tail = prev;
        } else {
            next->prev = prev;
        }

        delete i;
    }

    // 10 <-> 25 <-> 30
    void reverse() {
        auto i = head;
        while (i != nullptr) {
            auto tmp = i->next;
            i->next = i->prev;
            i->prev = tmp;

            i = tmp;
        }
        auto tmp = head;
        head = tail;
        tail = tmp;
    }

    void clear() {
        auto i = head;
        while (i != nullptr) {
            auto tmp = i->next;
            delete i;
            i = tmp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void displayForward() {
        auto i = head;
        while (i != nullptr) {
            cout << i->data;
            i = i->next;
            if (i != nullptr) {
                cout << " <-> ";
            }
        }
        cout << "\n";
    }

    void displayBackward() {
        auto i = tail;
        while (i != nullptr) {
            cout << i->data;
            i = i->prev;
            if (i != nullptr) {
                cout << " <-> ";
            }
        }
        cout << "\n";
    }
};

int main() {
    auto list = new DoublyLinkedList();

    list->insertAtHead(10); // Insert 10 at the head: 10
    list->insertAtHead(20); // Insert 20 at the head: 20 <-> 10

    // list->displayForward();
    // list->displayBackward();

    list->insertAtTail(30); // Insert 30 at the tail: 20 <-> 10 <-> 30
    list->insertAtTail(40); // Insert 40 at the tail: 20 <-> 10 <-> 30 <-> 40

    // list->displayForward();
    // list->displayBackward();

    list->insertAtPosition(2, 25); // Insert 25 at position 2: 20 <-> 10 <-> 25 <-> 30 <-> 40

    // list->displayForward();
    // list->displayBackward()

    // list->deleteAtHead(); // Delete the head: 10 <-> 25 <-> 30 <-> 40
    // list->displayForward();
    //
    // list->deleteAtTail(); // Delete the tail: 10 <-> 25 <-> 30
    // list->displayForward();
    //
    // list->deleteAtPosition(2); // Delete at position 1: 10 <-> 30
    // list->displayForward();
    //
    // list->deleteAtPosition(0); // Delete at position 1: 30
    // list->displayForward();

    // list->displayForward();
    // list->reverse();
    // list->displayForward();

    list->clear(); // Clear the list
    list->displayForward();

    delete list;

    return 0;
}
