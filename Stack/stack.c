#include <stdlib.h>
#include "stack.h"

Stack init(int maxSize) {
	Stack s = malloc(sizeof(struct StackRecord));
	s->TopOfStack = -1;
	s->Capacity = maxSize;
	s->arr = malloc(sizeof(int) * maxSize);

	return s;
}

void Push(Stack S, int value) {
	if (S->Capacity != S->TopOfStack + 1)
		S->arr[++S->TopOfStack] = value;
	else
		printf("Stack is full\n");
}

int Pop(Stack S) {
	if (!isEmpty(S)) {
		int value = S->arr[S->TopOfStack];
		S->TopOfStack--;
		return value;
	}
	else
		printf("Stack is empty\n");
}

int Top(Stack S) {
	if (!isEmpty(S)) {
		return S->arr[S->TopOfStack];
	}
}

int isEmpty(Stack S) {
	if (S->TopOfStack == -1)
		return 1;
	else return 0;
}