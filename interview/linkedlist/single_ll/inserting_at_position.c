#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

void insert_at_pos(int data,int pos){
	struct node *temp = NULL;
	struct node *head = NULL	;
	struct node *ptr = head;
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

