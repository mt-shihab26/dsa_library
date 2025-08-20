#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int _data) {
        data = _data;
    }

    Node(int _data, Node *_next) {
        data = _data;
        next = _next;
    }
};

class SinglyLinkedlist {
    Node *head;

  public:
    SinglyLinkedlist() {
        head = nullptr;
    }
    ~SinglyLinkedlist() {
        clear();
    }

    void insert(int data) {
        head = new Node(data, head);
    }

    void insert(int index, int data) {
        auto it = head;
        auto pt = it;

        for (int i = 0; it != nullptr && i < index; i++) {
            pt = it;
            it = it->next;
        }
        auto node = new Node(data, it);
        pt->next = node;
    }

    void insertTail(int data) {
        auto it = head;
        if (it == nullptr) {
            insert(data);
            return;
        }
        while (it->next != nullptr) {
            it = it->next;
        }
        it->next = new Node(data);
    }

    void clear() {
        auto it = head;
        while (it != nullptr) {
            auto tmp = it->next;
            delete it;
            it = tmp;
        }
    }

    void print() {
        auto it = head;
        while (it != nullptr) {
            cout << it->data << " ";
            it = it->next;
        }
        cout << "\n";
    }

    int size() {
        int count = 0;
        auto it = head;
        while (it != nullptr) {
            count++;
            it = it->next;
        }
        return count;
    }

    int search(int data) {
        unsigned int index = 0;
        auto it = head;
        while (it != nullptr) {
            index++;
            if (it->data == data) {
                return index - 1;
            }
            it = it->next;
        }
        return -1;
    }

    bool empty() {
        return head == nullptr;
    }

    void remove() {
        if (head == nullptr) {
            return;
        }
        auto tmp = head->next;
        delete head;
        head = tmp;
    }

    void remove(int index) {
        if (head == nullptr) {
            return;
        }
        auto it = head;
        auto pt = it;
        for (int i = 0; i < index && it != nullptr; i++) {
            pt = it;
            it = it->next;
        }
        pt->next = it->next;

        delete it;
    }

    void removeTail() {
        if (head == nullptr) {
            return;
        }
        auto it = head;
        auto pt = it;
        while (it->next != nullptr) {
            pt = it;
            it = it->next;
        }
        pt->next = nullptr;
        delete it;
    }
};

int main() {
    auto list = new SinglyLinkedlist();

    cout << "Testing insertion operations\n";
    list->insert(10);
    list->print();

    list->insert(20);
    list->print();

    list->insert(1, 15);
    list->print();

    list->insert(5);
    list->print();

    list->insertTail(30);
    list->print();

    cout << "\nTesting size and search\n";
    cout << "list size: " << list->size() << endl;
    cout << "search for 15: " << list->search(15) << endl;
    cout << "search for 100: " << list->search(100) << endl;
    cout << "is empty: " << (list->empty() ? "yes" : "no") << endl;

    cout << "\nTesting deletion operations\n";
    list->remove();
    cout << "After deleting head: ";
    list->print();

    list->removeTail();
    cout << "After deleting tail: ";
    list->print();

    list->remove(0);
    cout << "After deleting at position 0: ";
    list->print();

    // cout << "\n4. Testing reverse operation:" << endl;
    // list->insertTail(40);
    // list->insertTail(50);
    // list->insertTail(60);
    // cout << "Before reverse: ";
    // list->list();
    //
    // list->reverse();
    // cout << "After reverse: ";
    // list->list();
    //
    // cout << "\n5. Testing clear operation:" << endl;
    // list->clear();
    // cout << "After clear: ";
    // list->list();
    // cout << "Is empty: " << (list->empty() ? "Yes" : "No") << endl;

    delete list;
    return 0;
}
