struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode Stack;

typedef struct Node {
	PtrToNode next;
	int value;
} *PtrToNode;

Stack init(void);

void Push(Stack S, int value);

int Pop(Stack S);

int Top(Stack S);

int isEmpty(Stack S);