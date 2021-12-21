#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void) {
	List header = malloc(sizeof(List));
	header->next = NULL;
	
	insert(5, header);
	insert(4, header);
	insert(3, header);

	printList(header);
	deleteList(header);

	return 0;
}