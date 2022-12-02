#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
	if(root==NULL)
	{
		return;
	}
	
	queue<BinaryTreeNode<int>*> pendings;
	pendings.push(root);
	while(pendings.size() != 0)
	{
		BinaryTreeNode<int> * front = pendings.front();
		pendings.pop();
        cout << front->data <<":";
		if(front->left == NULL)
		{
			cout <<"L:"<< -1 << ",";
		}
        else
        {
            cout <<"L:"<< front->left->data<<",";
            pendings.push(front->left);
        }
       // pendings.push(front->left);
        
		if(front->right==NULL)
		{
			cout <<"R:"<< -1;
		}
        else
        {
            cout <<"R:"<< front->right->data;
            pendings.push(front->right);
        }
        //pendings.push(front->right);
		cout << endl;
	}


}
//1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
int main() {
    BinaryTreeNode<int>* root = takeInput();
    printLevelWise(root);
}