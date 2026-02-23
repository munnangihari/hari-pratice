#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *link;
	int data;
};
struct node *head = NULL;
struct node *temp = NULL;

void insert_at_begin(){
	temp = malloc(sizeof(struct node));
	temp -> data = 10;
	temp -> link = head;
	temp = head;
}
