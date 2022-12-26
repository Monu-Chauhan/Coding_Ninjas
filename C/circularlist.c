#include<stdio.h>
#include<stdlib.h>
struct node {
   // struct node *previous;
    int data;
    struct node *next;
};
int size =0;
void insert(struct node **head,int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if(*head == NULL)
    {
        *head = newNode;
        size++;
        return;
    }
    struct node *temp = *head;
    newNode->next = temp;
    while(temp->next!=NULL)
    {
        temp = temp ->next;
    }
    temp ->next = newNode;
    size++;
}
void print(struct node *head)
{
    /*while (head!=NULL)
    {
        printf("%d-->",head->data);
        head = head->next;
    }*/
    while(size--)
    {
        printf("%d-->",head->data);
        head = head->next;
    }
    printf("NULL");
    printf("\nSize : %d\n",size);
}
int main()
{
    struct node *head = NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    print(head);
}