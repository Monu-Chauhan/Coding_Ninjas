#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX];
int size=0,currIndex=-1;
void push( )
{
    int data;
    printf("Enter data : \n");
    scanf("%d",&data);
    if(size==MAX-1)
    {
        printf("Stack FULL\n");
    }
    else
    {
        currIndex++;
        arr[currIndex]=data;
        size++;
    }
}
int pop()
{
    int item;
    if(size==0)
    {
        printf("Stack Empty\n"); 
    }
    else
    {
        item = arr[currIndex];
        currIndex--;
        size--;
    }
    return item;
}
void isFull()
{
    if(size==MAX-1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Stack is not Full\n");
    }
}
void isEmpty()
{
    if(size==0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack is Not Empty\n");
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
    printf("1.push 2.pop 3.isEmpty 4.isFull 5.Getsize 6.Display 7.Exit\n");
    while (1)
    {
        int choice,out;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
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
                printf("Enter valid input:\n");
                break;
        }
    }
    
}