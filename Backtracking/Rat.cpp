/*
	Note:
	To get all the test cases accepted, make recursive calls in following order: Top, Down, Left, Right.
	This means that if the current cell is (x, y), then order of calls should be: top cell (x-1, y), 
	down cell (x+1, y), left cell (x, y-1) and right cell (x, y+1).
*/
#include<bits/stdc++.h>
using namespace std;
int board[20][20];
int path[20][20];
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << path[i][j] << " ";
        }
    }
}
void helper(int n,int x,int y)
{
    if(x==n-1 && y==n-1)
    {
        print(n);
        return;
    }
    if(path[x][y]==1 || x>=n || y>=n || x<0 || y <0 || board[x][y]==0 )
    {
        return;
    }
    path[x][y]=1;
    helper(n,x-1,y);
    helper(n,x+1,y);
    helper(n,x,y-1);
    helper(n,x,y+1);
    path[x][y]=0;

}

int main() {

	// Write your code here
	int n;
	cin >> n;
	 for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> board[i][j];
		}
	}
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			//cin >> path[i][j];
            path[i][j]=0;
		}
	}
    helper(n,0,0);
    
	return 0;
}
