#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *tail = NULL;
void insert_at_end() 
{
	temp = malloc(sizeof(struct node));
	temp -> data = 10;
	tail -> link = temp;
	tail = temp;
}

