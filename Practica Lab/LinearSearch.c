#include<stdio.h>
void linear(int *arr,int size,int data)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            printf("Element %d is found at index %d\n",data,i);
            return;
        }
    }
    printf("Element is not found\n");
}
int main()
{
    int arr[]={5,8,4,9,6,25,1,35,87,99};
   linear(arr,10,25);
   linear(arr,10,250);
}