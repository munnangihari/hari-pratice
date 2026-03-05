#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *temp = NULL;
struct node *tail = NULL;

void insert_at_end() {
        temp = malloc(sizeof(struct node));
        temp -> data = 50;
        temp -> link = NULL;
        tail -> link = temp;
        tail = temp;
}
