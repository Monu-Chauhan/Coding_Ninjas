#include <iostream>
#include <string>
using namespace std;
// dp
int dp_helper(string a, string b, int **arr) 
{
    
}
int dp_lcs(string a, string b)
{
    int m = a.size();
    int n = b.size();
    int **arr = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        arr[i] = new int[n + 1];
        for (int j = 0; j <= n; j++)
        {
            arr[i][j] = -1;
        }
    }
    return dp_helper(a, b, arr);
}
// memoisation
int mem_lcs_helper(string a, string b, int **arr)
{
    int m = a.size();
    int n = b.size();
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (arr[m][n] != -1)
    {
        return arr[m][n];
    }
    int ans;
    if (a[0] == b[0])
    {
        ans = 1 + mem_lcs_helper(a.substr(1), b.substr(1), arr);
    }
    else
    {
        int x = mem_lcs_helper(a.substr(1), b, arr);
        int y = mem_lcs_helper(a, b.substr(1), arr);
        ans = max(x, y);
    }
    arr[m][n] = ans;
    return ans;
}
int lcs_mem(string a, string b)
{
    int m = a.size();
    int n = b.size();
    int **arr = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        arr[i] = new int[n + 1];
        for (int j = 0; j <= n; j++)
        {
            arr[i][j] = -1;
        }
    }
    return mem_lcs_helper(a, b, arr);
}
int lcs(string a, string b)
{
    if (a.size() == 0 || b.size() == 0)
    {
        return 0;
    }
    if (a[0] == b[0])
    {
        return 1 + lcs(a.substr(1), b.substr(1));
    }
    else
    {
        int x = lcs(a.substr(1), b);
        int y = lcs(a, b.substr(1));
        return max(x, y);
    }
}
int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int o = lcs(a, b);
    int o1 = lcs_mem(a, b);
    cout << o << " ";
    cout << o1 << " ";
}