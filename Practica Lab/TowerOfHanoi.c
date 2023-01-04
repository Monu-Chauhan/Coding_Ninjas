#include<stdio.h>
void tower(int n,char start,char help,char dest)
{
    if(n==0)
    {
        return;
    }
    tower(n-1,start,dest,help);
    printf("%c to %c\n",start,dest);
    tower(n-1,help,start,dest);
}
int main()
{
    int n;
    printf("Enter no. : ");
    scanf("%d",&n);
    tower(n,'a','b','c');
}