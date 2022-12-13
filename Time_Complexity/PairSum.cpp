#include <iostream>
#include <algorithm>
using namespace std;
 void Sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int key= arr[i];
        int j=i-1;
       for(;j>=0;j--)
       {
           if(key <arr[j])
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
int pairSum(int *arr, int n, int num)
{
	//Write your code here
    Sort(arr,n);
     
    int count =0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==num)
        {
            count++;
            i++;
        }
        else if(arr[i]+arr[j]>num)
        {
            j--;
        }
        else
        {
            i++;
        }
            
    }
    return count;
    
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}