/* Online C Compiler and Editor */
#include <stdio.h>
void selection(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<size ;j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
int main()
{
    int arr[10] = {2,5,1,3,0,58,95,100,54,23};
    selection(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

}