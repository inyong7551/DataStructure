#include <stdio.h>
#include "queue.h"

int main(void) {
	Queue q = init(6);

	printf("Enqueue : ");
	for (int i = 1; i <= 6; i++) {
		printf("%d ", i);
		Enqueue(q, i);
	}
	printf("\nDequeue : ");
	
	while (isEmpty(q) != 1) {
		printf("%d ", Dequeue(q));
	}
	printf("\n");

	return 0;
}