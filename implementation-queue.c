// Example implementation of a doubly-linked queue in C:
// Add elements to the front of the queue (function insertFront);
// Add elements to the end of the queue (function insertRear);
// Remove elements from the front of the queue (function removeFront);
// Remove elements from the end of the queue (function removeRear);
// Check if the queue is empty (isEmpty);
// Free the memory allocated to the queue (freeQueue).

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Queue
{
    struct Node *front;
    struct Node *rear;
};

struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

bool isEmpty(struct Queue *q)
{
    return q->front == NULL;
}

void insertFront(struct Queue *q, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = q->front;
    temp->prev = NULL;

    if (q->front == NULL)
        q->rear = temp;
    else
        q->front->prev = temp;

    q->front = temp;
}

void insertRear(struct Queue *q, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = q->rear;

    if (q->front == NULL)
        q->front = temp;
    else
        q->rear->next = temp;

    q->rear = temp;
}

int removeFront(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("A fila está vazia\n");
        return -1;
    }

    struct Node *temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;
    else
        q->front->prev = NULL;

    free(temp);
    return data;
}

int removeRear(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("A fila está vazia\n");
        return -1;
    }

    struct Node *temp = q->rear;
    int data = temp->data;
    q->rear = q->rear->prev;

    if (q->rear == NULL)
        q->front = NULL;
    else
        q->rear->next = NULL;

    free(temp);
    return data;
}

void freeQueue(struct Queue *q)
{
    while (!isEmpty(q))
    {
        removeFront(q);
    }
    free(q);
}

int main()
{
    struct Queue *q = createQueue();
    insertFront(q, 1);
    insertFront(q, 2);
    insertRear(q, 3);
    insertRear(q, 4);
    printf("Removed from front: %d\n", removeFront(q));
    printf("Removed from back: %d\n", removeRear(q));

    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }

    free(q);
    return 0;
}
