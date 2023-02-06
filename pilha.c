#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    int data[MAX_SIZE];
};

void init(struct Stack *stack)
{
    stack->top = -1;
}

int is_empty(struct Stack *stack)
{
    return stack->top == -1;
}

int is_full(struct Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int item)
{
    if (is_full(stack))
    {
        printf("A pilha está cheia.\n");
        return;
    }

    stack->data[++stack->top] = item;
}

int pop(struct Stack *stack)
{
    if (is_empty(stack))
    {
        printf("A pilha está vazia.\n");
        return -1;
    }

    return stack->data[stack->top--];
}

int main(void)
{
    struct Stack stack;
    init(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));

    return 0;
}
