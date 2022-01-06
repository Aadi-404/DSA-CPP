#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int i = 0;

node *stringToBinary(node *root, string &s)
{
    if (s.empty())
    {
        return root;
    }
    int temp = 0;
    while (i < s.length() && s[i] != '(' && s[i] != ')')
    {
        temp = temp * 10 + (s[i] - '0');
        i++;
    }
    // cout << i << "-> temp :" << temp << endl;
    node *n = new node(temp);
    root = n;
    if (s[i] == '(' && root->left == NULL)
    {
        i++;
        root->left = stringToBinary(root->left, s);
    }
    if (s[i] == '(' && root->right == NULL)
    {
        i++;
        root->right = stringToBinary(root->right, s);
    }
    if (s[i] == ')')
    {
        i++;
        return root;
    }
        return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "  ";
    inorder(root->right);
    return;
}

int main()
{
    string s = "5(2(7)(8))(9(3)(1))";
    node *root;
    root = stringToBinary(root, s);

    // cout<<root->data;
    inorder(root);
}