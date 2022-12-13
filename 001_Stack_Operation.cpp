#include<iostream>
using namespace std;
#include "0001_Class_StackUsingArray.h"

int main()
{
   StackOperations s1(5);
   s1.push(10);
   s1.push(20);
   s1.push(30);
   s1.push(40);
   s1.push(50);
   s1.push(60); //Stack is full
   cout << s1.pop() << endl;
   cout << s1.top() << endl;
   cout << s1.totalSize() << endl;
   cout << s1.isEmpty() << endl;
   cout << s1.isFull() << endl;
}