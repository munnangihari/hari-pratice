#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void count_nodes() {
	struct node *head = NULL;
	struct node *ptr = head;
	int count = 0;

	while (ptr != NULL) {
		count++;
		ptr = ptr->link;
	}


	printf("Number of nodes = %d\n", count);

}

