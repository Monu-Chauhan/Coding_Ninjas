#include<iostream>
#include"Node.h"
using namespace std;
void print(Node<int> *head)
{
   while(head!=NULL)
   {
    cout << head->data <<" ";
    head = head->next;
   }
}
int main()
{
    //Statically
    Node<int> n1(10);
    Node<int> *head = &n1;
    Node<int> n2(20);
    Node<int> n3(30);
    Node<int> n4(40);
    Node<int> n5(50);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    print(head);
   // n1.next=&n2;
}