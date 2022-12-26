#include<stdio.h>
void insertionSort(int* arr, int n)
{
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int minIndex = i-1;
        while (minIndex >=0 && arr[minIndex]>current)
        {
            arr[minIndex+1]=arr[minIndex];
            minIndex--;
        }
        arr[minIndex+1]=current;
    }
}
print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[]={5,4,3,8,6,9,11,54,25,65,35,85,45,95,0};
    insertionSort(arr,15);
    print(arr,15);
}