#include <iostream>
using namespace std;
#include "Node.h"
Node<int> *takeInput()
{
    int data;
    cin >> data;
    Node<int> *head = NULL;
    Node<int> *tail = NULL;
    while (data != -1)
    {
        Node<int> *newNode = new Node<int>(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void print(Node<int> *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node<int> *deleteNode(Node<int> *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }
    Node<int> *temp = head;
    if (pos == 0)
    {
        Node<int> *first = head;
        head = head->next;
        delete first;
        return head;
    }
    int count = 0;
    while (temp != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
        if(temp==NULL || temp->next == NULL)
         {
            return head;
         }
    }
    if (temp != NULL)
    {
        Node<int> *a = temp->next;
        Node<int> *b = a->next;
        delete a;
        temp->next = b;
        return head;
    }
    
}
int main()
{
    Node<int> *head = takeInput();
    cout << "Before Deleting\n";
    print(head);
    int position;
    cout << "\nEnter position\n";
    cin >> position;
    head = deleteNode(head, position);
    cout << "\nAfter deleting Node\n";
    print(head);
}