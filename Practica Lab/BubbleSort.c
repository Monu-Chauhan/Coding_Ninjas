#include<stdio.h>
void bubbleSort(int *input, int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(input[j]>input[j+1])
            {
                int temp=input[j];
                    input[j]=input[j+1];
                    input[j+1]=temp;
            }
        }
    }
}
void display(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    display(arr,n);
    
}