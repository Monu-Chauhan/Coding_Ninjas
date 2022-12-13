#include<iostream>
using namespace std;
#include "Node.h"
Node<int> * takeInput()
{
    int data;
    cin >> data;
    Node<int> *head = NULL;
    Node<int> *tail = NULL;
    while(data != -1)
    {
        Node<int> *newNode= new Node<int>(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next =newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
//Insert at ith position
Node<int> *insertAtith(Node<int> *head,int i,int data)
{
    Node<int> *newNode=new Node<int>(data);
    int count = 0;
    Node<int> *temp = head;
    if(i==0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        newNode->next = temp->next;
        temp->next=newNode;
    }
    return head;
    
}
void print(Node<int> *head)
{
    while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    } 
}

int main()
{
    cout << "Enter Link List\n";
    Node<int> *head = takeInput();
    cout << "Before insetion\n";
    print(head);
    int i,data;
    cout <<"\nEnter position and data to insert : ";
    cin >> i >> data;
    head = insertAtith(head,i,data);
    cout << "\nAter insertion\n";
    print(head);
}