#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *tail = NULL;

void delete_at_end()
{
	temp = tail;
	struct node *ptr = head;
	while(ptr -> link -> link != NULL)
	{
		ptr = ptr -> link;
	}
	ptr -> link = NULL;
	tail= ptr;
	free(temp);
	temp = NULL;
}
