#include<stdio.h> 
#include<stdlib.h>
int main() 
{
    struct node 
    { 
        int data; 
        struct node *next;
    };
    struct node *head, *new_node, *temp; 
    head = 0; int choice = 1;
    while(choice) 
    {
        new_node = (struct node*)malloc(sizeof(struct node)); 
        printf("enter data:\n"); 
        scanf("%d", &new_node->data); 
        new_node->next = 0; 
        if(head == 0) 
        { 
            head = temp = new_node; 
        }
        else
        {
            temp->next = new_node; 
            temp = new_node; 
        }
        printf("do you want to continue(1/0)?");
        scanf("%d", &choice);
    }
    temp = head;
    while(temp!=0)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}
