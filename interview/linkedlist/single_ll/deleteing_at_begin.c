#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;
struct node *temp = NULL;

void deleteing_at_begin() 
{
        temp = head;
        head = head -> link;
        free(temp);
}
