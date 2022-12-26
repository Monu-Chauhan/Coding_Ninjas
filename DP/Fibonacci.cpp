#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 1);
}
int main()
{
    int n;
    while (1)
    {
        cout << "Enter a number : ";
        cin >> n;
        int out = fibo(n);
        cout << out << " \n";
    }
}