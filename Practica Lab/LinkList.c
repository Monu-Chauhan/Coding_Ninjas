#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node * delete_begin(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Link list is empty\n");
    }
    head = head ->next;
    free(temp);
    return head;
}
struct node * delete_end(struct node *head)
{
    struct node *temp = head;
    struct node *tempNxt = head->next;
    while (tempNxt->next != NULL)
    {
        temp = temp->next;
        tempNxt= tempNxt->next;
    }
    temp ->next = NULL;
    free(tempNxt);
    return head;
    
}
struct node * delete_at_pos(struct node *head,int pos)
{
    struct node *temp = head;
    int size = getSize(head);
    if(pos < 0 || size < pos)
    {
        printf("Invalid pos\n");
        return 0;
    }
    else if (pos==0)
    {
        head = head->next;
        free(temp);
        return head;
    }
    else
    {
        while (--pos)
        {
            temp=temp->next;
        }
        struct node *del = temp ->next;
        temp ->next = del->next;
        free(del);
        return head;
        
    }
}
void Insert_at_pos(struct node **head, int item, int position)
{
    int size = getSize(*head);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = NULL;
    if (position < 0 || position > size)
    {
        printf("Invalid position\n");
    }
    else if (position == 0)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        struct node *temp = *head;
        while (--position)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void Insert_begin(struct node **head, int item)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    if (*head == NULL)
    {
        newNode->next = NULL;
        *head = newNode;
        return;
    }
    newNode->next = *head;
    *head = newNode;
    return;
}
void Insert_end(struct node **head, int item)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = NULL;
    struct node *temp = *head;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
void display(struct node *head_ref)
{
    while (head_ref != NULL)
    {
        printf("%d-->", head_ref->data);
        head_ref = head_ref->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head = NULL;
    Insert_end(&head, 3);
    Insert_end(&head, 4);
    Insert_end(&head, 5);
    Insert_begin(&head, 2);
    Insert_bigin(&head, 1);
    Insert_at_pos(&head, 6, 2);
    head = delete_begin(head);
    head = delete_end(head);
    head = delete_at_pos(head,2);

    display(head);
}