#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void) {
	int i;
	Stack S = init(6);
	
	printf("Insert : ");
	for (i = 1; i <= 5; i++) {
		printf("%d ", i);
		Push(S, i);
	}
	printf("\n");

	printf("From the top : ");
	while (!isEmpty(S)) {
		printf("%d ", Pop(S));
	}
	printf("\n");

	return 0;
}