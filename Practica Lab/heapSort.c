#include<stdio.h>
#define MAX 20
int arr[MAX];
int size = 0;
void insert(int element)
{
    arr[size-1]=element;
    int lastIndex = size-1;
    while(lastIndex>0)
    {
        int parentIndex = (lastIndex-1)/2;
        if(arr[parentIndex]<arr[lastIndex])
        {
            int temp = arr[parentIndex];
            arr[parentIndex]=arr[lastIndex];
            arr[lastIndex]=temp;
        }
        else
        {
            break;
        }
        lastIndex=parentIndex;
    }  
}
int removeMax()
{
    int ans = arr[0];
    arr[0]=arr[size-1];
    size--;
    int parentIndex =0;
    int leftIndex = (2*parentIndex)+1;
    int rightIndex = (2*parentIndex)+2;
    while (leftIndex < size)
    {
        int maxIndex = parentIndex;
        if(arr[maxIndex]<arr[leftIndex])
        {
            maxIndex=leftIndex;
        }
        if(rightIndex<size && arr[maxIndex]<arr[rightIndex])
        {
            maxIndex=rightIndex;
        }
        if(maxIndex == parentIndex)
        {
            break;
        }
        int temp = arr[parentIndex];
        arr[parentIndex]= arr[maxIndex];
        arr[maxIndex]=temp;
        parentIndex = maxIndex;
        leftIndex = 2*parentIndex +1;
        rightIndex = 2*parentIndex +1;
    }
    return ans;
    
}
void display()
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter element of array\n");
    for(int i=0;i<n;i++)
    {
        int ele;
        scanf("%d",&ele);
        size++;
        insert(ele);
    }
    printf("Show heap\n");
    display();
    printf("\nHeap sort\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",removeMax());
    }

}