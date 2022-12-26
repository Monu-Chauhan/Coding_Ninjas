#include<stdio.h>
int binarySearch(int *arr,int low ,int high,int data)

{
    int mid=(low+high)/2;
    if(low>high)
    {
        return -1;
    }
    if(arr[mid]==data)
    {
        return mid;
    }
    if(arr[mid]>data)
    {
        binarySearch(arr,low,mid-1,data);
    }
    else
    {
        binarySearch(arr,mid+1,high,data);
    }
    /*int low=0,high = n-1;
    while(low<high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==data)
        {
            return mid;
        }
        else if(arr[mid]>data)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;*/
}
int main()
{
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int data;
    printf("Enter data to search : \n");
    scanf("%d",&data);
    int out=binarySearch(arr,0,n-1,data);
    if(out==-1)
    {
        printf("Element is not present in array\n");
    }
    else
    {
        printf("Element is present at %d",out);
    }
}