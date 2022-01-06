#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    class Node *next;
};

Node *push(Node *&x, int val)
{
    Node *n = new Node;
    n->data = val;
    n->next = x;
    return n;
}
void transverseLinkedList(class Node *ptr)
{
    cout << "transverse linked list " << endl;
    class Node *p = ptr;
    int n = 0;
    while (p != NULL)
    {
        cout<< p->data << endl;
        p = p->next;
        n++;
    }
}

Node *reverseLL(Node *&x, int k)
{
    Node *cur, *prev, *n;
    prev = NULL;
    n = NULL;
    cur = x;
    int count = 0;
    while (cur != NULL && count < k)
    {
        n = cur->next;
        cur->next = prev;
        prev = cur;
        cur = n;
        count++;
    }
    if (n != NULL)
    {
        x->next = reverseLL(n, k);
    }
    return prev;
}

main()
{
    Node *head = NULL;
    head = push(head, 9);
    head = push(head, 8);
    head = push(head, 7);
    head = push(head, 6);
    head = push(head, 5);
    head = push(head, 4);
    head = push(head, 3);
    head = push(head, 2);
    head = push(head, 1);
    transverseLinkedList(head);
    head = reverseLL(head, 4);
    transverseLinkedList(head);
}