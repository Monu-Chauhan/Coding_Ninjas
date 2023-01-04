#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newNode(int item)
{
    struct node *newN = (struct node*)malloc(sizeof(struct node));
    newN->data = item;
    newN->left = NULL;
    newN->right = NULL;
    return newN;
}
struct node * insert(struct node *root,int data)
{
    if(root == NULL)
    {
        return newNode(data);
    }
    else if(root-> data < data)
    {
        root -> right = insert(root->right,data);
    }
    else
    {
        root-> left = insert(root->left,data);
    }
    return root;
}
struct node *minvalue(struct node* node)
{
    struct node* current = node;
    while(current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}
struct node*deletion(struct node* root,int item)
{
    if(root == NULL)
    {
        return root;
    }
    else if(root->data < item)
    {
        root->right = deletion(root->right,item);
    }
    else if(root->data >item)
    {
        root->left = deletion(root->left,item);
    }
    else
    {
        if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
    struct node *temp = minvalue(root->right);
    root->data = temp->data;
    root->right = deletion(root->right,temp->data);
    }
    return root;

}
void display(struct node*root)
{
    if(root!=NULL)
    {
        display(root->left);
        printf("%d-->",root->data);
        display(root->right);
    }
    
}
int main()
{
    struct node * root = NULL;
    root = insert(root,4);
    root = insert(root,6);
    root = insert(root,10);
    display(root);
    printf("\n");
    root = deletion(root,6);
    display(root);
}