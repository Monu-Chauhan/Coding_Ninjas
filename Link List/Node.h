#include<iostream>
template<typename T>
class Node{
    public:
    T data;
    Node *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};