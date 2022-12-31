#include<stdio.h>
#define M 10
void binarySearch(int *arr, int low ,int high,int data)
{
     int mid=(low+high)/2;
    if(low>high)
    {
        printf("Element is not present \n");
        return;
    }
    if(arr[mid]==data)
    {
        printf("Element %d is found at index %d\n",data,mid);
        return;
    }
    if(arr[mid]>data)
    {
        binarySearch(arr,low,mid-1,data);
    }
    else
    {
        binarySearch(arr,mid+1,high,data);
    }
}
int main()
{
    int arr[M]={1,5,12,23,34,35,45,56,67,78};
    binarySearch(arr,0,M-1,23);
    binarySearch(arr,0,M-1,78);
    binarySearch(arr,0,M-1,230);
    
}