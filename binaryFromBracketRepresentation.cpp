#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int _data)
    {
        data = _data;
        left = NULL;
        right = NULL;
    }
};


void preorder(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
Node *stringtoBinary(string s, int &i)
{
    if (i >= s.length())
    {
        return NULL;
    }
    if (s[i] == ')')
    {
        i++;
        return NULL;
    }
    int val = 0;
    while (s[i] != '(' && s[i] != ')' && i < s.length())
    {
        val = val * 10 + s[i++] - '0';
    }
    Node *n = new Node(val);
    if (s[i] == '(')
    {
        i++;
        n->left = stringtoBinary(s, i);
    }
    if (s[i] == '(')
    {
        i++;
        n->right = stringtoBinary(s, i);
    }

    i++;
    return n;
}

main()
{
    string s = "4(2(3)(1))(6(5))";
    int i = 0;
    Node *root = stringtoBinary(s, i);
    preorder(root);
}