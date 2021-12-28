struct QueueRecord;
typedef struct QueueRecord* Queue;

struct QueueRecord {
	int capacity;
	int front;
	int rear;
	int size;
	int* arr;
};

Queue init(int capacity);

// Enqueue value in Q
void Enqueue(Queue Q, int value);

// Dequeue value from Q
int Dequeue(Queue Q);

int isEmpty(Queue Q);