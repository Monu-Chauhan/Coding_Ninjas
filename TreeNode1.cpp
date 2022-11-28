#include<iostream>
#include "TreeNode.h"
TreeNode<int>* takeInput()
{
    int rootdata;
    cout << "Enter root data : ";
    cin >> rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    int n;
    cout << "Enter number of children of" << rootdata ;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
}
void printTree(TreeNode<int>* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for(int i=0;i<root->children.size();i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for(int i=0; i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }

}
int main()
{
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>*Node1= new TreeNode<int>(2);
    TreeNode<int>*Node2 = new TreeNode<int>(3);
    root->children.push_back(Node1);
    root->children.push_back(Node2);
    printTree(root);
    //We always delete Tree TODO
}