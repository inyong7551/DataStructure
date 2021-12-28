#include <stdlib.h>
#include "queue.h"

Queue init(int capacity) {
	Queue q = malloc(sizeof(struct QueueRecord));
	q->capacity = capacity;
	q->arr = malloc(sizeof(int) * capacity);
	q->front = 0;
	q->rear = -1;
	q->size = 0;

	return q;
}

// Enqueue value in Q
void Enqueue(Queue Q, int value) {
	if (Q->capacity != Q->size) {
		Q->rear = (Q->rear + 1) % Q->capacity;
		Q->arr[Q->rear] = value;
		Q->size++;
	}
	else {
		printf("Queue is full\n");
	}
}

// Dequeue value from Q
int Dequeue(Queue Q) {
	if (isEmpty(Q) != 0) {
		int val = Q->arr[Q->front];
		Q->front = (Q->front + 1) % Q->capacity;
		Q->size--;
		return val;
	}
	else {
		printf("Queue is empty\n");
	}
}

int isEmpty(Queue Q) {
	if (Q->size == 0)
		return 1;
	else return 0;
}