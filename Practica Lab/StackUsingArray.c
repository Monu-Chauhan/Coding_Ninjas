#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int currentIndex = -1;
void push(int element)
{
    if(currentIndex == MAX-1)
    {
        printf("Stack is Full\n");
        return;
    }
    currentIndex++;
    stack[currentIndex]=element;
}
void pop()
{
    if(currentIndex==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    int item = stack[currentIndex];
    currentIndex--;
    printf("Deleted data is %d\n",item);
}
void isEmpty()
{
    if(currentIndex==-1){
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}
void isFull()
{
    if(currentIndex==MAX-1){
        printf("Stack is full\n");
    }else
    {
        printf("Stack is not full\n");
    }
}
void top()
{
    printf("Top element is %d\n",stack[currentIndex]);
}
void getSize()
{
    int size = currentIndex+1;
    printf("Size is %d\n",size);
}
void display()
{
    for(int i=0;i<=currentIndex;i++)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    
    printf("1.push 2.pop 3.isEmpty 4.isFull 5.top 6.getSize 7.display 8.exit\n");
    while (1)
    {
        int choice;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            int data;
            printf("Enter data : ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            isFull();
            break;
        case 5:
            top();
            break;
        case 6:
            getSize();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
               
        default:
            printf("Enter valid choice\n");
            break;
        }
    }
    
}