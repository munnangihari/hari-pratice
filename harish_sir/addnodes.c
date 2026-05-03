#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *head;

void addnode(int value){
	struct node *newnode = malloc(sizeof(struct node));
	newnode -> data = value;
	newnode -> link = NULL;

	if(head == NULL){
		head = newnode;
	}
	else{
		struct node *temp = head;
		while(temp -> link != NULL){
			temp = temp -> link;
		}
		temp -> link = newnode;
	}
}

void display(){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> link;
	}
	printf("NULL\n");
}

int main(){
	addnode(10);
	addnode(20);
	addnode(30);
	
	display();
	return 0;
}
