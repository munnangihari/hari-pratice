#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;
struct node *ptr = NULL;
struct node *temp = NULL;

void insert_at_pos(int data,int pos)
{
        temp = malloc(sizeof(struct node));
        temp -> data = data;
        temp -> link = NULL;
        while(pos - 2)
        {
                ptr = ptr -> link;
                pos--;
        }
        temp -> link = ptr -> link;
        ptr -> link = temp;
}

