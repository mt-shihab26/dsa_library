// Stack implementation in C

/*
Operation:
    * create_empty_stack()
    * is_full()
    * is_empty()
    * push()
    * pop()
    * print_stack()
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

// Creating a stack
struct stack {
    int items[MAX];
    int top;
};
typedef struct stack st;

void create_empty_stack(st *s) {
    s->top = -1;
}

// Check if the stack is full
int is_full (st *s) {
    if (s->top == MAX-1)
        return 1;
    else
        return 0;
}

// Check if the stack is empty
int is_empty(st *s) {
    if (s->top == -1)
        return 1;
    else 
        return 0;
}

// Add elements into stack
void push(st *s, int new_item) {
    if (is_full(s)) {
        printf("Stack FULL");
    }
    else {
        s->top++;
        s->items[s->top] = new_item;
    }
    count++;
}

// Remove element from stack
void pop(st *s) {
    if (is_empty(s)) {
        printf("\n Sack Empty \n");
    }
    else {
        printf("Item poped = %d", s->items[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}

// Print elements of stack
void print_stack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int ch;
    st *s = (st *)malloc(sizeof(st));
    create_empty_stack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    print_stack(s);

    pop(s);

    printf("\nAfter popping out\n");
    print_stack(s);
}