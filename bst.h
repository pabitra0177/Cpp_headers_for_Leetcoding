#include<iostream>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


struct node
{
    /* data */
    int val;
    struct node *left,*right;

    node(): val(0),left(NULL),right(NULL) {}
    node(int x): val(x),left(NULL),right(NULL) {}
};
typedef struct node TreeNode;

void print_val(TreeNode* root)
{
    if(root==NULL)
        return;
    
    cout<<(root->val)<<endl;
}

void io_m(TreeNode* root) // modified inorder as per requirment
{
    if(root)
    {
        io(root->left);
        cout<<root->val<<" ";
        io(root->right);
    }
}

TreeNode* insert_node(TreeNode* root,int key)
{
    if(root==NULL)
    {
        TreeNode* node = new TreeNode(key);
        return node;
    }

    if(root->val == key)
        return root;

    else if(key < root->val)
        root->left=insert_node(root->left,key);
    
    else 
        root->right=insert_node(root->right,key);

    return root;    
}

TreeNode* delete_node(TreeNode* root, int key )
{
    if(root == NULL)
        return root;
    
    if(key < root->val)
        root->left = delete_node(root->left,key);
    
    else if(key > root->right)
        root->right = delete_node(root->right,key);
    
    else // current node is to be deleted
    {
        
    }
}

int height(TreeNode *root)
{
    if(root ==NULL)
        return 0;
    
    int ls = height(root->left);
    int rs = height(root->right);

    return 1 + max(ls,rs);  
}

 