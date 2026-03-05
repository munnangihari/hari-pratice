#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;
struct node *temp = NULL;

void insert_at_begin(){
	temp = malloc(sizeof(struct node));
	temp -> data = 10;
	temp -> link = NULL;
	temp -> link = head;
	head = temp;
}

