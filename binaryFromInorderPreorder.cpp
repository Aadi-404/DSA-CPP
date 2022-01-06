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
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[], int temp)
{
    int j;
    for ( j = 0; j < 5; j++)
    {
        if (inorder[j] == temp)
        {
            return j;
        }
    }
    return -1;
}
Node *solve(int inorder[], int preorder[], int lb, int ub, Node *root)
{
    static int i = 0;
    if (i >= 5)
    {
        return root;
    }

    if (ub < lb)
    {
        return NULL;
    }
    if (ub == lb)
    {
        Node *n = new Node(preorder[i]);
        i++;
        return n;
    }
    Node *n = new Node(preorder[i]);
    root = n;
    int pos = search(inorder, preorder[i]);
    i++;
    root->left = solve(inorder, preorder, lb, pos - 1, root->left);
    root->right = solve(inorder, preorder, pos + 1, ub, root->right);
    return root;
}
void print(Node *root)
{
    if (!root)
    {
        return;
    }
    print(root->left);
    cout << root->data << "  ";
    print(root->right);
}

main()
{
    Node *root = NULL;
    int inorder[5] = {4, 2, 5, 1, 3};
    int preorder[5] = {1, 2, 4, 5, 3};
    int ub = 5;
    int lb = 0;
    root = solve(inorder, preorder, lb, ub, root);
    print(root);
}