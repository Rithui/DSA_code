
#include<iostream>
#include<climits>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int getMin(struct Node* node);
int getMax(Node* root);

int isBST(struct Node* node)
{

  if (node == NULL)
    return 1;


  if (node->left != NULL && getMax(node->left) > node->data)
    return 0;

  if (node->left != NULL && getMin(node->right) < node->data)
    return 0;

  if (!isBST(node->left) || !isBST(node->right))
    return 0;

  return 1;
}


int getMin(Node *root)
    {
        if(root==NULL)
        return INT_MAX;

       int res=root->data;
       int left=getMin(root->left);
       int right=getMin(root->right);
       if(left<res)
       {
           res=left;
       }
       if(right<res)
       {
           res=right;
       }
       return res;
    }

int getMax(Node* root)
{
    if (root == NULL)
        return INT_MIN;

    int res = root->data;
    int lres = getMax(root->left);
    int rres = getMax(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}


int main(){
    Node* root = newNode(10);
    root->left = newNode(6);
    root->right = newNode(4);
    root->left->left = newNode(11);
    root->left->right = newNode(2);

    if(isBST(root))
    cout<<"Binary Tree is BST";
    else
    cout<<"Binary Tree is not Bst";
    return 0;
}
