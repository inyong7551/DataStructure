typedef struct Node {
	struct Node* next;
	int value;
} *ptrToNode;
typedef ptrToNode List;
typedef ptrToNode Position;


int isEmpty(List l);

Position find(int n, List l);

Position findPrevious(int n, List l);

void insert(int n, Position p);

void delete_(int n, List l);

void deleteList(List l);

void printList(List l); 