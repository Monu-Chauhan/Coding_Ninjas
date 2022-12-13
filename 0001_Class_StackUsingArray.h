#include<iostream>
using namespace std;
class StackOperations
{
    int *list;
    int nextIndex;
    int size;
    public:
    StackOperations(int totalsize)
    {
        list = new int[totalsize];
        nextIndex = -1;
        size = totalsize;

    }
    int totalSize()
    {
        if(nextIndex == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            return nextIndex +1;
        }
    }
    bool isEmpty()
    {
        return nextIndex == -1;
    }
   bool isFull()
    {
        return nextIndex == (size -1);
    }
    void push(int element)
    {
        if(nextIndex== size-1)
        {
            cout << "Stack is full"<< endl;
        }
        else
        {
            nextIndex = nextIndex+1;
            list[nextIndex]=element;
        }
    }
    int pop()
    {
        if(nextIndex == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            int element = list[nextIndex];
            nextIndex--;
            return element;
        }
    }
    int top()
    {
        if(nextIndex == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else if(nextIndex == size -1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            return list[nextIndex];
        }
    }
};