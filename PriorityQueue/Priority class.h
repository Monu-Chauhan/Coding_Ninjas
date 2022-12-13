#include <vector>
#include <iostream>
using namespace std;
class PriorityQueue
{
    vector<int> priority;

public:
    bool isEmpty()
    {
        return priority.size() == 0;
    }
    int getMin()
    {
        if (!isEmpty())
            return priority[0];
        else
            return 0;
    }
    int getsize()
    {
        return priority.size();
    }
    void insert(int ele)
    {
        priority.push_back(ele);
        int lastIndex = priority.size() - 1;
        while (lastIndex > 0)
        {
            int parentIndex = (lastIndex - 1) / 2;
            if (priority[lastIndex] < priority[parentIndex])
            {
                int temp = priority[lastIndex];
                priority[lastIndex] = priority[parentIndex];
                priority[parentIndex] = temp;
            }
            else
            {
                break;
            }
            lastIndex = parentIndex;
        }
    }
    int RemoveMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        int ans = priority[0];
        priority[0] = priority[priority.size() - 1];
        priority.pop_back();
        int parentIndex = 0;
        int leftIndex = 2 * parentIndex + 1;
        int rightIndex = 2 * parentIndex + 2;
        while (leftIndex < priority.size())
        {

            int minIndex = parentIndex;
            if (priority[minIndex] > priority[leftIndex])
            {
                minIndex = leftIndex;
            }
            if (rightIndex < priority.size() && priority[minIndex] > priority[rightIndex])
            {
                minIndex = rightIndex;
            }
            if (parentIndex == minIndex)
            {
                break;
            }
            int temp = priority[minIndex];
            priority[minIndex] = priority[parentIndex];
            priority[parentIndex] = temp;
            parentIndex = minIndex;
              leftIndex = 2 * parentIndex + 1;
            rightIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
    void display()
    {
        for (int i = 0; i < priority.size(); i++)
        {
            cout << priority[i] << " ";
        }
    }
};