#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;

int main()
{
	temp=malloc(sizeof(struct node));
	temp->data=10;
	temp->link=NULL;
	if(head==NULL)
	{
		head=tail=temp;
	}
	temp=malloc(sizeof(struct node));
	temp->data=20;
	temp->link=NULL;
	tail->link=temp;
	tail=temp;
	temp=malloc(sizeof(struct node));
	temp->data=30;
	temp->link=NULL;
	tail->link=temp;
	tail=temp;

	temp=malloc(sizeof(struct node));
	temp->data=5;
	temp->link=head;
	head=temp;

	temp=malloc(sizeof(struct node));
        temp->data=40;
        temp->link=NULL;
        tail->link=temp;
        tail=temp;


	temp=malloc(sizeof(struct node));
        temp->data=50;
        temp->link=NULL;
	temp1=head;
	while(pos!=2)
	{
		temp=temp->link;
		pos--;
	}
	temp->link=temp
	printf("%d->",head->data);
	printf("%d->",head->link->data);
	printf("%d->",head->link->link->data);
	printf("%d->",head->link->link->link->data);
	printf("%d",head->link->link->link->link->data);


	return 0;
}



