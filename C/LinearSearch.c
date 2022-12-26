#include<stdio.h>
int linearSearch(int arr[],int n,int data,int low)
{
    if(low>n)
    {
        return -1;
    }
    if(arr[low]==data)
    {
        return low;
    }
    linearSearch(arr,n,data,low+1);
   /* for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
        {
            return i;
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
    int out=linearSearch(arr,n,data,0);
    if(out==-1)
    {
        printf("Element is not present in array\n");
    }
    else
    {
        printf("Element is present at %d",out);
    }
}
 