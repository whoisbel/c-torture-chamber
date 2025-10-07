#include <stdio.h>
#include <stdlib.h>

//Own implementation of Stack Data Structure

#include <stdio.h>
#include <stdlib.h>

struct Node {
    void *data;
    struct Node *next;
};

struct Stack {
    int size;
    struct Node *head;
};

typedef struct Stack stack;

void makeStack(stack *st) {
    st->size = 0;
    st->head = NULL;
}

void push(stack *st, void *data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = st->head;
    st->head = newNode;
    st->size++;
}

void pop(stack *st) {
    if (st->head == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct Node *temp = st->head;
    st->head = st->head->next;
    free(temp);
    st->size--;
}

void printStack(stack *st) {
    struct Node *current = st->head;
    printf("Stack (top to bottom): ");
    while (current != NULL) {
        printf("%d ", *(int *)current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    stack st;
    makeStack(&st);

    int *a = malloc(sizeof(int)); 
    *a = 10;
    int *b = malloc(sizeof(int)); 
    *b = 20;
    int *c = malloc(sizeof(int)); 
    *c = 30;

    push(&st, a);
    push(&st, b);
    push(&st, c);

    printStack(&st);

    pop(&st);
    printStack(&st);

    return 0;
}
