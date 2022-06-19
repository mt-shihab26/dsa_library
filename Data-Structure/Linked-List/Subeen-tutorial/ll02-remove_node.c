#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct  Node {
    int data;
    Node *next;
};

Node *create_node(int item, Node *next) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Error! Could not Create a New Node\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;

    return new_node;
}

Node *remove_node(Node *head, Node *node) {
    if (node == head) {
        head = node->next;
        free(node);
        return head;
    }

    Node *current_node = head;
    while (current_node != NULL) {
        if (current_node->next == node) {
            break;
        }
        current_node = current_node->next;
    }

    if (current_node == NULL) {
        return head;
    }

    current_node->next = node->next;
    free(node);
    return head;
}


int main() {
    Node *n;
    n = create_node(10, NULL);
    printf("data = %d\n", n->data);

    return 0;
}
