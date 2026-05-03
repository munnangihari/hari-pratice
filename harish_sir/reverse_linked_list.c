#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;

void addnode(int value){
	struct node *newnode =(struct node*) malloc(sizeof(struct node));
	newnode -> data = value;
	newnode -> link = NULL;

	if(head == NULL){
		head = newnode;
	}
	else{
		struct node *temp = head;
		while(temp -> link != NULL)
		{
			temp = temp -> link;
		}
		temp -> link = newnode;
	} 
}

void display(){
	struct node *temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->link;
	}
	printf("NULL\n");
}

void reverse(){

	struct node *temp = NULL;
	struct node *ptr = head;
	struct node *prev = NULL;

	while(ptr != NULL)
	{
		temp = ptr -> link;
		ptr -> link = prev;
		prev = ptr;
		ptr = temp;
	}
	head = prev;
}

int main(){
	addnode(10);
	addnode(20);
	addnode(30);
	addnode(40);

	printf("original list:\n");
	display();

	reverse();

	printf("reversed list:\n");
	display();

	return 0;
}
