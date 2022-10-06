#include<iostream>
using namespace std;
void Insertionsort(int* arr,int n)
{ 
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        for(j=i-1;j>=0;j--)
        {
            if(key<arr[j])
            {
                arr[j+1]=arr[j];

            }
            else
            {
                break;
            }
        }
        arr[j+1]=key;
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
     
    Insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    
}