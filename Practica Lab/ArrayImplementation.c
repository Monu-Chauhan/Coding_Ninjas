#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int currentIndex =-1;
void Insert_end(int* arr,int data)
{
    if(currentIndex == MAX -1)
    {
        printf("Array is Full\n");
        return;
    }
    currentIndex++;
    arr[currentIndex]=data;
}
void Insert_At_pos(int * arr,int data,int index)
{  
    if(currentIndex== MAX-1){
        printf("Array is full\n");
        return;
    }
    if(index>currentIndex)
    {
        return;
    }
    int start=currentIndex;
    currentIndex++;
    for(int i=start;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=data;
}
void delete_end(int *arr){
    if(currentIndex == -1){
        printf("Array is empty");
        return;
    }
    int item = arr[currentIndex];
    currentIndex--;
    printf("Delete data is %d \n",item);
}
void delete_at_pos(int *arr,int index)
{
    if(currentIndex==-1){
        printf("Array is empty\n");
        return;
    }
    if(index>currentIndex)
    {
        return;
    }
     int item = arr[index];
    for(int i=index;i<=currentIndex;i++){
        arr[i]=arr[i+1];
    }
    printf("Deleted data is %d\n",item);
    currentIndex--;
}
void display(int *arr)
{
    for(int i=0;i<=currentIndex;i++){
    
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[MAX];
    printf("1.insert_end 2.insert_at_pos 3.delete_end 4.delete_at_position 5.display 6.exit\n");
    while(1){
        int choice;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            int data;
            printf("Enter data : ");
            scanf("%d",&data);
            Insert_end(arr,data);
            break;
        case 2:
            int index;
            printf("Enter data & index : ");
            scanf("%d %d",&data,&index);
            Insert_At_pos(arr,data,index);
            break;
        case 3:
            delete_end(arr);
            break;             
        case 4:
            printf("Enter index : ");
            scanf("%d",&index);
            delete_at_pos(arr,index);
            break;
        case 5:
            display(arr);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter valid choice\n");
            break;
        }
    }
}