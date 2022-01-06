#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void flattenUtilityInorder(Node * root,Node * &prev){
    if(!root)return;

    flattenUtilityInorder(root->left,prev);

    prev ->right= root;
    prev->left = NULL;
    prev = prev->right;

    flattenUtilityInorder(root->right,prev);
}
Node * flatten(Node *root)
{
    if(!root)return NULL;
    Node * dummy= new Node(-1);
    Node * prev = dummy;
    flattenUtilityInorder(root,prev);
    prev->right = prev->left = NULL;
    Node * ret= dummy ->right;
    delete dummy;
    return ret;
    

}
void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    return;
}
main()
{
    Node *root = NULL;
    root = new Node(5);
    root->right = new Node(7);
    root->right->left = new Node(6);
    root->right->right = new Node(9);
    root->left = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    inorder(root);
    Node * result = flatten(root);
    inorder(result);
}