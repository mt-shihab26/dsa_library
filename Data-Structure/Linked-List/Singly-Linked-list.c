// Singly Linked List C Language minimal Implementation

/* Operation:
      Insert Node
          at the end
          at the beginning
          at any ware with index;
      Read Node
          print all node data element
          get specific node data with index
      Update Node
          update specific node with index
      Delete Node
          delete specific node with index

  Special Note:
      This implementation I use 0 base indexing.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node {
    int data;
    Node *next;
};

Node *create_node(int data, Node *next) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Error: Can't Create new Node\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = next;
    return new_node;
}


// Insert Node
Node *insert_end(Node *head, int data) {
    Node *new_node = create_node(data, NULL);
    if (head == NULL) return new_node;
    Node *it = head;
    while (it->next != NULL)
        it = it->next;
    it->next = new_node;
    return head;
}

Node *insert_beginning(Node *head, int data) {
    Node *new_node = create_node(data, head);
    return new_node;
}

Node *insert_at(Node *head, int data, int position) {
    Node *new_node = create_node(data, NULL);
    if (position == 0) {
        new_node->next = head;
        return new_node;
    }
    int ct = 0;
    Node *it = head;
    while (it != NULL) {
        ct += 1;
        if (position == ct) {
            new_node->next = it->next;
            it->next = new_node;
            break;
        }
        it = it->next;
    }
    return head;
}


// Read Node
void print_all(Node *head) {
    Node *it = head;
    while (it != NULL) {
        printf("%d ", it->data);
        it = it->next;
    }
    printf("\n");
}
int get_at(Node *head, int position) {
    Node *it = head;
    int ct = 0;
    while (it != NULL) {
        if (ct++ == position) return it->data;
        it = it->next;
    }
}


// Update Node
void update_at(Node *head, int data, int position) {
    Node *it = head;
    int ct = 0;
    while (it != NULL) {
        if (ct++ == position) it->data = data;
        it = it->next;
    }
}

// Delete Node
Node *delete_at(Node *head, int position) {
    if (position == 0) {
        Node *tmp = head->next;
        free(head);
        return tmp;
    }
    Node *it = head;
    int ct = 1;
    while (it != NULL && position > ct) {
        it = it->next;
        ct++;
    }
    if (it != NULL) {
        Node *tmp = it->next->next;
        free(it->next);
        it->next = tmp;
    }
    return head;
}

void deep(Node* it) {
    if (it == NULL) return;
    deep(it->next);
    printf("%d ", it->data);
}


int main() {
    Node *head = NULL;
    head = insert_end(head, 25);
    print_all(head);
    insert_end(head, 33);
    print_all(head);
    insert_end(head, 77);
    print_all(head);

    head = insert_beginning(head, 100);
    print_all(head);

    insert_at(head, 50, 2);
    print_all(head);
    head = insert_at(head, 20, 0);
    print_all(head);

    printf("%d\n", get_at(head, 5));

    print_all(head);
    update_at(head, 150, 2);
    print_all(head);

    head = delete_at(head, 0);
    print_all(head);
    delete_at(head, 3);
    print_all(head);
    delete_at(head, 5);
    print_all(head);

    printf("\n\n");

    deep(head);
}