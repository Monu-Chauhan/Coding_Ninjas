#include<iostream>
using namespace std;
void Bubblesort(int* arr,int n)
{
    for(int step=0;step<n;step++)
    {
    for(int i=0;i<n-step;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp =arr[i];
             arr[i]=arr[i+1];
              arr[i+1]=temp;
        }
    }
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
     
    Bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    
}