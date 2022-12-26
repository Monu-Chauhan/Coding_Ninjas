#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX];
int front =-1,rear=-1;
int size=0;
void push_At_rear()
{
    int item;
    printf("Enter data : ");
    scanf("%d",&item);
    if(size == MAX)
    {
        printf("Queue is Full\n");
    }
    else if(front == -1 || rear == -1)
    {
        front++;
        rear++;
        arr[rear]=item;
        size++;
    }
    else
    {
        rear=(rear+1)%MAX;
        arr[rear]=item;
        size++;
    }
}
void push_At_front()
{
    int item;
    printf("Enter data : ");
    scanf("%d",&item);
    if(size == MAX)
    {
        printf("Queue is Full\n");
    }
    else if(front == -1 || rear == -1)
    {
        front++;
        rear++;
        arr[front]=item;
        size++;
    }
    else
    {
        front=(front-1+MAX)%MAX;
        arr[front]=item;
        size++;
    }
}
int pop_At_front()
{
    int item;
    if(size==0)
    {
        printf("Queue is empty\n");
        return 0;
    }
    else if(front==rear)
    {
        item = arr[front];
        front=rear=-1;
        size--;
    }
    else
    {
        item = arr[front];
        front=(front+1)%MAX;
        size--;
    }
    return item;
}
int pop_At_rear()
{
    int item;
    if(size==0)
    {
        printf("Queue is empty\n");
        return 0;
    }
    else if(front==rear)
    {
        item = arr[rear];
        front=rear=-1;
        size--;
    }
    else
    {
        item = arr[rear];
        rear=(rear-1+MAX)%MAX;
        size--;
    }
    return item;
}
void isFull()
{
    if(size==MAX-1)
    {
        printf("Q is Full\n");
    }
    else
    {
        printf("Q is not Full\n");
    }
}
void isEmpty()
{
    if(size==0)
    {
        printf("Q is Empty\n");
    }
    else
    {
        printf("Q is Not Empty\n");
    }
}
int Getsize()
{
    return size;
}
void display()
{
    for(int i=front;i!=rear;i=(i+1)%MAX)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    printf("1.push_At_rear 2.push_At_front 3.pop_At_front 4.pop_At_rear 5.isEmpty 6.isFull 7.Size 8.Display 9.exit\n");
    while (1)
    {
        int choice,out;
        printf("Enter choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push_At_rear();
            break;
        case 2:
            push_At_rear();
            break;
        case 3:
            out = pop_At_front();
            printf("Deleted item : %d\n",out);
            break;
        case 4:
            out = pop_At_rear();
            printf("Deleted item : %d\n",out);
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            isFull();
            break;
        case 7:
            out = Getsize();
            printf("Size : %d\n",out);
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
        default:
            printf("Enter valid option\n");
            break;
        }
    }
}