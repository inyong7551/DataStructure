#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Stack init(void) {
	Stack s = malloc(sizeof(struct Node));
	s->next = NULL;
	return s;
}

void Push(Stack S, int value) {
	PtrToNode p = malloc(sizeof(struct Node));
	p->value = value;

	p->next = S->next;
	S->next = p;
}

int Pop(Stack S) {
	int value;
	PtrToNode p = S->next;
	value = p->value;
	S->next = S->next->next;
	free(p);

	return value;
}

int Top(Stack S) {
	return S->next->value;
}

int isEmpty(Stack S) {
	if (S->next == NULL)
		return 1;
	else return 0;
}