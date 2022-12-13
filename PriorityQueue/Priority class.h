#include<vector>
#include<iostream>
using namespace std;
class PriorityQueue{
vector<int>priority;
public:
    int getMin(){
        if(!priority.empty())
        return priority[0];
        else
        return 0;
    }
    int getsize(){
        return priority.size();
    }
    void insert(int ele){
        priority.push_back(ele);
        int lastIndex = priority.size()-1;
        while (lastIndex>0)
        {
            int parentIndex = (lastIndex-1)/2;
            if(priority[lastIndex]<priority[parentIndex])
            {
            int temp = priority[lastIndex];
            priority[lastIndex]=priority[parentIndex];
            priority[parentIndex]=temp;
            }
            else
            {
                break;
            }
            lastIndex=parentIndex;
        }
    }
    void display()
    {
        for(int i=0;i<priority.size();i++)
        {
            cout << priority[i]<< " ";
        }
    }

};