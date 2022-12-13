#include<iostream>
#include "MaxHeap class.h"
using namespace std;
int main()
{
     int n,ele;
    cout <<"Enter no of element : ";
    cin >> n;
    PriorityQueue pq;
    cout <<"Enter element : "<< "\n";
    for(int i=0;i<n;i++)
    {
        cin >> ele;
        pq.insert(ele);
    }
    pq.display();
    cout << endl;
    cout << pq.getMax() << endl;
    cout << pq.getSize() << endl;
    cout << pq.isEmpty() << endl;

    
    cout << "Remove max\n";
    while (!pq.isEmpty())
    {
        cout << pq.removeMax() << " ";
    }
    
   /* PriorityQueue pq;
    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMax
                cout << pq.getMax() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMax() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }
        
        cin >> choice;
    }*/
}