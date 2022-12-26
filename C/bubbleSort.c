#include<stdio.h>
void bubbleSort(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    bubbleSort(arr,15);
    print(arr,15);
}