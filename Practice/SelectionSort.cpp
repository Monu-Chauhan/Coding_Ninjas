#include<iostream>
using namespace std;
void Selectionsort(int* arr,int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[min])
           {
             min=j;
           }
        }
           int temp =arr[min];
             arr[min]=arr[i];
              arr[i]=temp;
        
        
    }
    
}
int main()
{
    int arr[100],x,n;
    //Enter size
    cin >> n;
    // enter element of array
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
     
    Selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    
}