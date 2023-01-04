#include<stdio.h>
#include<stdlib.h>
struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
};

struct treeNode* create()
{
    int rootData;
    //printf("Enter root data > ");
    scanf("%d",&rootData);
    if(rootData == -1)
    {
        return NULL;
    }
    struct treeNode *newNode;
    newNode = (struct treeNode*)malloc(sizeof(struct treeNode));
    newNode->data = rootData;
    printf("Enter left data of %d > ",rootData);
    newNode->left=create();
    printf("Entr right data of %d > ",rootData);
    newNode->right = create();
    return newNode;

}
void display(struct treeNode *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
    }
    else
    {
        return;
    }
    display(root->left);
    display(root->right);
    
}
int main()
{
    struct treeNode *root;
    printf("Enter root data > ");
    root = create();
    display(root);
    return 0;
}
