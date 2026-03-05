#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert_at_begin(int data){
	struct node *temp = malloc(sizeof(struct node));
	if(temp == NULL){
		printf("Memory allocation failed\n");
		return;
	}

	temp->data = data;
	temp->link = head;
	head = temp;

	if(tail == NULL) 
		tail = temp;
}

void insert_at_end(int data){
	struct node *temp = malloc(sizeof(struct node));
	if(temp == NULL){
		printf("Memory allocation failed\n");
		return;
	}

	temp->data = data;
	temp->link = NULL;

	if(head == NULL){
		head = temp;
		tail = temp;
		return;
	}

	tail->link = temp;
	tail = temp;
}

void insert_at_pos(int data, int pos){
	if(pos <= 0){
		printf("Invalid Position\n");
		return;
	}

	if(pos == 1){
		insert_at_begin(data);
		return;
	}

	struct node *ptr = head;
	for(int i = 1; i < pos - 1; i++){
		if(ptr == NULL){
			printf("Invalid Position\n");
			return;
		}
		ptr = ptr->link;
	}

	if(ptr == NULL){
		printf("Invalid Position\n");
		return;
	}

	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->link = ptr->link;
	ptr->link = temp;

	if(temp->link == NULL)
		tail = temp;
}

void display(){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

int main(){
	insert_at_begin(10);
	display();

	insert_at_end(50);
	display();

	insert_at_pos(20,2);
	display();

	return 0;
}
