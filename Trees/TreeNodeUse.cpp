#include <iostream>
#include <queue>
#include "Tree Node class.h"
TreeNode<int> *TakeInputLevelwise()
{
    cout << "Enter root data:\n";
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingQueue;
    pendingQueue.push(root);
    while (pendingQueue.size() != 0)
    {
        TreeNode<int> *front = pendingQueue.front();
        pendingQueue.pop();
        cout << "Enter num of children of " << front->data << "\n";
        int numchild;
        cin >> numchild;
        for (int i = 0; i < numchild; i++)
        {
            cout << "Enter children of " << i << "th position of " << front->data << endl;
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingQueue.push(child);
        }
    }
    return root;
}
/*TreeNode<int> *takeInput()
{
    cout << "Enter data :\n";
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    cout << "Enter children no. of " << rootData << "\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}*/
void print(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        if (i == 0)
        {
            cout << root->children[i]->data;
        }
        else
        {
            cout << "," << root->children[i]->data;
        }
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}
// 1 3 2 3 4 2 5 6 1 7 2 8 9 0 0 0 0 0
void PrintLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> pendingNode;
    pendingNode.push(root);
    while (pendingNode.size() != 0)
    {
        TreeNode<int> *front = pendingNode.front();
        cout << front->data << ":";
        pendingNode.pop();
        for (int i = 0; i < front->children.size(); i++)
        {
            if (i == 0)
            {
                cout << front->children[i]->data;
            }
            else
            {
                cout << "," << front->children[i]->data;
            }
            pendingNode.push(front->children[i]);
        }
        cout << endl;
    }
}
using namespace std;
int main()
{
    /*TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);*/
    // TreeNode<int> *root = takeInput();
    TreeNode<int> *root = TakeInputLevelwise();
    //print(root);
    PrintLevelWise(root);
}