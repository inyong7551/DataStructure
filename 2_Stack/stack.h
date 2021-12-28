struct StackRecord {
	int Capacity;
	int TopOfStack;
	int* arr;
};

typedef struct StackRecord* Stack;

Stack init(int maxSize);

void Push(Stack S, int value);

int Pop(Stack S);

int Top(Stack S);

int isEmpty(Stack S);