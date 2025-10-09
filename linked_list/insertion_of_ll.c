#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void begining(struct node *new_node,struct node *head,struct node* temp){
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert at the beginning: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    head = new_node;
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        printf("%p\t", temp->next);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL, *new_node, *temp;
    int choice = 1;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("Do you want to continue adding nodes (1/0)? ");
        scanf("%d", &choice);
    }
    begining(new_node,head,temp);
    return 0;
}
