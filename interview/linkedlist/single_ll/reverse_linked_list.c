#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void reverse_list()
{
	struct node *head = NULL;
	struct node *tail = NULL;
	struct node *ptr = head;
	struct node *prev = NULL;
	struct node *temp2 = NULL;

	tail = head;

	while(ptr != NULL)
	{
		temp2 = ptr->link;
		ptr->link = prev;
		prev = ptr;
		ptr = temp2;
	}
	head = prev;
}
