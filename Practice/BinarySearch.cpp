#include<iostream>
using namespace std;
int BinarySearch(int* arr,int n,int x)
{
     int low=0;
    int  high = n-1;
    while(low <=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
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
    //enter element for search
    cin >> x;
    int ans = BinarySearch(arr,n,x);
    cout << ans << endl;
}