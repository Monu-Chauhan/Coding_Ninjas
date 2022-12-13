#include<vector>
#include<iostream>
using namespace std;
class PriorityQueue {
    // Declare the data members here
   private:
   vector<int> p;

   public:
    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        p.push_back(element);
        int lastIndex  = p.size()-1;
        while(lastIndex>0){
            int parentIndex = (lastIndex-1)/2;
            if (p[lastIndex] > p[parentIndex]) {
                int temp = p[lastIndex];
                p[lastIndex] = p[parentIndex];
                p[parentIndex] = temp;
            } else {
              break;
            }
            lastIndex = parentIndex;
        }
    }

    int getMax() {
        // Implement the getMax() function here
        if(isEmpty())
        {
            return 0;
        }
        else
        {
            return p[0];
        }
    }

    int removeMax() {
        // Implement the removeMax() function here
        int ans = p[0];
        p[0]=p[p.size()-1];
        p.pop_back();
        int parentIndex = 0;
        int leftIndex = 2 * parentIndex +1;
        int rightIndex = 2 * parentIndex +2;
        
        while(leftIndex < p.size())
        {

            int maxIndex = parentIndex;

            if(p[maxIndex]< p[leftIndex])
            {
                maxIndex = leftIndex;
            }
            if (rightIndex < p.size() && p[maxIndex] < p[rightIndex]) {
              maxIndex = rightIndex;
            }
            if(parentIndex == maxIndex)
            {
                break;
            }
            int temp = p[maxIndex];
            p[maxIndex] = p[parentIndex];
            p[parentIndex] = temp;
            parentIndex = maxIndex;
            leftIndex = 2 * parentIndex + 1;
            rightIndex = 2 * parentIndex + 2;
        }
        return ans;
    }

    int getSize() { 
        // Implement the getSize() function here
        return p.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return p.size()==0;
    }
    void display(){
        for(int i=0;i<p.size();i++)
        {
            cout <<p[i]<<" ";
        }
    }
};