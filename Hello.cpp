#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Hello, Monu Chauhan\n";
    int arr[] = {2,4,7,75,84,21,41,99,6,3,12,54,1,9};
    int Arrsize = sizeof(arr);
    int size = Arrsize/4;
    cout <<size << " \n";
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    
}
