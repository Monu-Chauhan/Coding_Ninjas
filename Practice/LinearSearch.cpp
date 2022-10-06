#include<iostream>
using namespace std;
int LinearSearch(int* arr,int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
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
    int ans = LinearSearch(arr,n,x);
    cout << ans << endl;
}