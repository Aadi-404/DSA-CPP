#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
    }
};
void insert(Node *root, int data)
{
    if (root == NULL)
    {
        Node *n = new Node(data);
        return;
    }
    else if (root->data > data)
        insert(root->right, data);
    else
        insert(root->left, data);
    return;
}
int ans = 0;
void replace(Node *root)
{
    if (!root){
        ans = -1;
        return;
    }
    replace(root->left);
    ans = root->data;
    replace(root->right);
}

int main()
{
    int a[] = {
        8, 58, 71, 18, 31, 32, 63, 92,
        43, 3, 91, 93, 25, 80, 28};
        for(int i = 14;i>=0;i--){
            a[0] = 
        }
}