#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

struct Node {
    int data;
    Node *next;
};

Node *create_node(int item) {
    Node *new_node = new Node;
    if (new_node == nullptr) {
        printf("Error! Could Not Create a New Node\n");
        exit(101);
    }

    (*new_node).data = item;
    (*new_node).next = nullptr;

    return new_node;
}

Node *insert_at_end(Node *it, int item) {
    Node *new_node = create_node(item);
    
    while ((*it).next != nullptr) it = (*it).next;
    (*it).next = new_node;
    return new_node;
}

int main() {
    Node *head = new Node;
    insert_at_end(head, 10);
    insert_at_end(head, 23);
    insert_at_end(head, 21);

    return 0;
}
