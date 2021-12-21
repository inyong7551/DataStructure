#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int isEmpty(List l) {
	if (l->next == NULL) return 0;
	else return 1;
}

Position find(int n, List l) {
	Position p = l->next;

	while (p != NULL && p->value != n)
		p = p->next;

	return p;
}

Position findPrevious(int n, List l) {
	Position p = l;

	while (p->next != NULL && p->next->value != n)
		p = p->next;

	return p;
}

void insert(int n, Position p) {
	Position temp;

	temp = malloc(sizeof(struct Node));
	temp->value = n;
	temp->next = p->next;
	p->next = temp;
}

void delete_(int n, List l) {
	Position p = findPrevious(n, l);

	if (p->next != NULL) {
		Position temp = p->next;
		p->next = temp->next;
		free(temp);
	}
}

void deleteList(List l) {
	Position p = l->next;
	Position temp;

	while (p != NULL) {
		temp = p;
		p = p->next;
		free(temp);
	}
}

void printList(List l) {
	Position p = l->next;

	while (p != NULL) {
		printf("%d ", p->value);
		p = p->next;
	}
}