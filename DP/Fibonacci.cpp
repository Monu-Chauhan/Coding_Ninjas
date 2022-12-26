#include <iostream>
using namespace std;
int fibo(int n)
{
   if(n==0)
   {
    return 0;
   }
   if(n==1)
   {
    return 1;
   }
    return fibo(n - 1) + fibo(n - 2);
}
int fibhelper(int *arr, int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    int a= fibhelper(arr,n-1);
    int b=fibhelper(arr,n-2);

    arr[n]=a+b;
    return arr[n];

}
int fibo1(int n)
{
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i]=-1;
    }
    return fibhelper(arr,n);
}
int fibo2(int n)
{
    int* arr= new int[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]= arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
   // int out = fibo(n);
  // int out = fibo1(n);
  int out = fibo2(n);
    cout << out << " ";
}