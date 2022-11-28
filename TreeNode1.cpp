#include<iostream>
#include<queue>
#include "TreeNode.h"
TreeNode<int>* takeInputLevelWise()
{
    int rootdata;
    cout << "Enter root data : ";
    cin >> rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingQueue;
    pendingQueue.push(root);
    while (pendingQueue.size()!=0)
    {
        TreeNode<int>* front = pendingQueue.front();
        pendingQueue.pop();
        cout << "Enter number of children of "<< front->data << endl;
        int num;
        cin >> num;
        for(int i=0;i<num;i++)
        {
            cout << "Enter " << i << "th children of "<<front->data << endl;
            int childData;
            cin >> childData;
            TreeNode<int>*child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingQueue.push(child);
        }
    }
    return root;
    
}
TreeNode<int>* takeInput()
{
    int rootdata;
    cout << "Enter root data : ";
    cin >> rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    int n;
    cout << "Enter number of children of" << rootdata << ":" ;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
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
    TreeNode<int>* root;
    
    root =takeInputLevelWise();
    printTree(root);
    //We always delete Tree TODO
}