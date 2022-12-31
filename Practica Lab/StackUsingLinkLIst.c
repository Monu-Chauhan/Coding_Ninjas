#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
struct node* deletion(struct node * head)
{
    if(head == NULL)
    {
        printf("Stack is empty\n");
        return 0;
    }
    struct node *temp = head;
    struct node *ptr = head ->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        temp = temp ->next;
    }
    temp->next = NULL;
    free(ptr);
    return head;
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d-->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head=NULL;
    while (1)
    {
        int choice;
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int data;
            printf("Enter data : ");
            scanf("%d",&data);
            insert(&head, data);
            break;
        case 2:
            head = deletion(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid choice\n");
            break;
        }
    }
}