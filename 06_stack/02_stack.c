/* Stack Implementation With C
Operation:
    * create_stack()
    * is_full()
    * is_empty()
    * push()
    * pop()
    * print_stack()
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_MAX 66

typedef struct {
    int data[STACK_MAX];
    int top;
} stack;

stack *create_stack(void) {
    stack *s = (stack *)malloc(sizeof(stack));
    s->top = -1;
    return s;
}

bool is_full(stack *s) {
    if (s->top == STACK_MAX-1) return 1;
    return 0;
}

bool push(stack *s, int item) {
    if (is_full(s)) return 0;
    s->top++;
    s->data[s->top] = item;
    return 1;
}

bool is_empty(stack *s) {
    if (s->top == -1) return 1;
    return 0; 
}

bool pop(stack *s) {
    if (is_empty(s)) return 0;
    s->top--;
    return 1;
}

void print_stack(stack *s) {
    int len = s->top + 1;
    printf("Stack Element: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int main() {
    stack *s = create_stack();

    push(s, 10);
    push(s, 20);

    print_stack(s);

    printf("%d\n", s->top);
    pop(s);
    print_stack(s);
}