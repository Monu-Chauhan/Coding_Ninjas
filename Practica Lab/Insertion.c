#include<stdio.h>
void insertion(int *arr,int size)
{
    for(int i=1;i<size;i++)
    {
        int current = arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>current)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=current;
    }
}
int main()
{
    int arr[]={2,15,32,56,95,48,0,12,32,105,47};
    insertion(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}