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
    void insertAtHead(int value) {
        auto node = new Node();
        node->data = value;

        // if list empty
        if (head == nullptr) {
            head = node;
            tail = node;
            return;
        }

        // 20 <-> 10
        head->prev = node;
        node->next = head;
        head = node;
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

    list->displayForward();  // Display forward: 20 <-> 10
    list->displayBackward(); // Display backward: 10 <-> 20

    // $list->insertAtTail(30); // Insert 30 at the tail: 20 <-> 10 <-> 30
    // $list->insertAtTail(40); // Insert 40 at the tail: 20 <-> 10 <-> 30 <-> 40
    //
    // $list->insertAtPosition(2, 25); // Insert 25 at position 2: 20 <-> 10 <-> 25 <-> 30 <-> 40
    //
    // $list->displayForward();  // Display forward: 20 <-> 10 <-> 25 <-> 30 <-> 40
    // $list->displayBackward(); // Display backward: 40 <-> 30 <-> 25 <-> 10 <-> 20
    //
    // $list->deleteAtHead();      // Delete the head: 10 <-> 25 <-> 30 <-> 40
    // $list->deleteAtTail();      // Delete the tail: 10 <-> 25 <-> 30
    // $list->deleteAtPosition(1); // Delete at position 1: 10 <-> 30
    //
    // $list->displayForward();  // Display forward: 10 <-> 30
    // $list->displayBackward(); // Display backward: 30 <-> 10
    //
    // $list->reverse(); // Reverse the list: 30 <-> 10
    //
    // $list->displayForward(); // Display forward after reverse: 30 <-> 10
    //
    // $list->clear(); // Clear the list

    delete list; // Free the memory

    return 0;
}
