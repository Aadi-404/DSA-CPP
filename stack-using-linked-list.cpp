#include <algorithm>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

bool isFull(struct Node *ptr)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node *));
    if (p == NULL)
    {
        return 1;
    }
    else
        return 0;
}
bool isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *ptr, int value)
{

    if (isFull(ptr))
    {
        cout << "Stack Overflow" << endl;
        return ptr;
    }
    else
    {

        struct Node *p = (struct Node *)malloc(sizeof(struct Node *));
        p->data = value;
        p->next = ptr;
        return p;
    }
}

int pop(struct Node **ptr)
{

    if (isEmpty(*ptr))
    {

        cout << "Stack Underflow" << endl;
        return -1;
    }

    else
    {
        int val = (*ptr)->data;
        struct Node *n = *ptr;
        *ptr = (*ptr)->next;
        free(n);
        return val;
    }
}
void transverseLinkedList(struct Node *ptr)
{
    struct Node *p = ptr;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

main()
{
    struct Node *top = NULL;

    top = push(top, 6);
    top = push(top, 33);
    top = push(top, 68);
    int element = pop(&top);
    cout << "Popped element : " << element << endl;

    transverseLinkedList(top);
}
