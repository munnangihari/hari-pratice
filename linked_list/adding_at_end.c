#include <stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
};
void add_at_end(struct node* ptr1, int data) {
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	while(ptr1->link != NULL)
	{
		ptr1 = ptr1->link;
	}
	ptr1->link = temp;
}
int main()
{
	struct node* head = malloc(sizeof(struct node));
	head-> data = 109;
	head-> link = NULL;
	add_at_end(head,100);
	printf("%d ",head->link->data);
	return 0;
}
