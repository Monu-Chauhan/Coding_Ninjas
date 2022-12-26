#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX];
int front =-1,rear=-1;
int size=0;
void push()
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
int pop()
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
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    printf("1.push 2.pop 3.isEmpty 4.isFull 5.Size 6.Display 7.exit\n");
    while (1)
    {
        int choice,out;
        printf("Enter choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            out = pop();
            printf("Deleted item : %d\n",out);
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            isFull();
            break;
        case 5:
            out = Getsize();
            printf("Size : %d\n",out);
            break;
        case 6:
            display();
            break;
        case 7:
            exit(0);
        default:
            printf("Enter valid option\n");
            break;
        }
    }
}