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


int main() {
    Node *n1 = create_node(12);
    cout << n1->data << endn;

    Node *n2 = create_node(23);
    cout << n2->data << endn;

    Node *n3 = create_node(55);
    cout << n3->data << endn;


    return 0;
}
