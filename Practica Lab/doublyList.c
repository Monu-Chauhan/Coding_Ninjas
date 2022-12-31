#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};

struct node * delete_beg(struct node* head)
{
    if(head==NULL)
    {
        printf("Empty\n");
        return 0;
    }
    struct node * temp = head;
    head = head->next;
    head->previous = NULL;
    free(temp);
    return head;
}
struct node * delete_end(struct node * head)
{
    if(head == NULL)
    {
        printf("Empty\n");
        return 0;
    }
    struct node * temp = head;
    struct node *tempNxt = head->next;
    while (tempNxt->next != NULL)
    {
        tempNxt = tempNxt->next;
        temp = temp->next;
    }
    temp ->next = NULL;
    free(tempNxt);
    return head;
    
}
struct node * delete_pos(struct node *head,int pos)
{
    if(head == NULL)
    {
        printf("Empty\n");
        return 0;
    }
    int size = getsize(head);
    struct node *temp = head;
    if(pos < 0 || pos>size)
    {
        printf("Invalid\n");
    }
    else if(pos==0)
    {
        head = head->next;
        head->previous = NULL;
        free(temp);
        return head;

    }
    else
    {
        while(--pos)
        {
            temp = temp->next;
        }
        struct node *del = temp->next;
        temp->next = del->next;
        del->next->previous = temp;
        free(del);
        return head;
    }
}
void insert_at_pos(struct node **head,int data,int position)
{
    int size = getsize(*head);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->previous=NULL;
    newNode->data = data;
    newNode->next=NULL;
    if(size < 0 || position > size)
    {
        printf("Invalid input\n");
    }
    else if(position==0)
    {
        struct node *temp = *head;
        newNode->next = temp;
        temp -> previous = newNode;
        *head = newNode;

    }
    else
    {
        struct node *temp = *head;
        while(--position)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->previous = newNode;
        temp ->next = newNode;
        newNode->previous = temp;
    }
}
void insert_At_begin(struct node **head,int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->previous=NULL;
    newNode->data= data;
    newNode->next=NULL;
    if(*head==NULL)
    {
        *head = newNode;
        return;
    }
    struct node *temp = *head;
    newNode->next = temp;
    temp -> previous = newNode;
    *head = newNode;

}
void insert_At_last(struct node **head,int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next=NULL;
    newNode->previous=NULL;
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    struct node *temp = *head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->previous = temp;
    //return;
}
void display(struct node *head)
{
    printf("NULL <--");
    while(head!=NULL)
    {
        printf(" %d <--> ",head->data);
        head= head->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head = NULL;
    insert_At_last(&head,3);
    insert_At_last(&head,4);
    insert_At_last(&head,5);
    insert_At_last(&head,6);
    insert_At_begin(&head,2);
    insert_At_begin(&head,1);
    insert_at_pos(&head,10,0);
    insert_at_pos(&head,100,2);
    head = delete_beg(head);
    head = delete_end(head);
    head = delete_pos(head,0);
    head = delete_pos(head,3);
    display(head);
}