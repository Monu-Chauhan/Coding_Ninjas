#include<iostream>
#include"Priority class.h"
using namespace std;
int main()
{
    int n,ele;
    cout <<"Enter no of element : ";
    cin >> n;
    PriorityQueue p;
    cout <<"Enter element : "<< "\n";
    for(int i=0;i<n;i++)
    {
        cin >> ele;
        p.insert(ele);
    }
    p.display();
}