#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};
int main(){
	struct node *temp = NULL;
	struct node *head = NULL;
	head = malloc(sizeof(struct node));
	head -> data = 100;
	head -> link = NULL;
	temp = head;

	temp -> link = malloc(sizeof(struct node));
        temp = temp->link;
        temp->data = 200;
        temp->link = NULL;
	
        printf("%d ->", head -> data);
	printf(" %d ", head -> link -> data);
	printf("\n");
	return 0;
}
