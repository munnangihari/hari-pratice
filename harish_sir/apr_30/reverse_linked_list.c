#include <stdio.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NUNLL;

void reverse() {
	struct node *temp = NULL;
	struct node *ptr  head;
	struct node *prev = NULL;

	while (ptr != NULL) {
		temp = ptr -> link;
		ptr -> link = prev;
		prev = ptr;
		ptr = temp;
	}
	head = prev;
}
