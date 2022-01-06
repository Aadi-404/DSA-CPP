#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class myStack
{
public:
    node *head = NULL;
    int num = 0;
    node *mid = NULL;
};
void push(myStack *&ms, int x)
{
    ms->num++;
    node *n = new node(x);
    if (ms->head == NULL)
    {
        ms->head = n;
        ms->mid = ms->head;
        return;
    }

    else if (ms->head->next == NULL)
    {
        n->next = ms->head;
        ms->head->prev = n;
        ms->head = n;
        ms->mid = n;
    }

    else
    {
        n->next = ms->head;
        ms->head->prev = n;
        ms->head = n;
        if (!(ms->num & 1))
        {
            ms->mid = ms->mid->next;
        }
        return;
    }
}
int pop(myStack *&ms)
{
    ms->num--;

    if (ms->head == NULL)
    {
        ms->num = 0;
        ms->mid = NULL;
        return -1;
    }
    else if (ms->head->next == NULL)
    {
        node *temp = ms->head;
        int data = ms->head->data;
        // ms->head = NULL;
        ms->mid = NULL;
        delete temp;
        ms->num = 0;
        return data;
    }

    else
    {
        node *temp = ms->head;
        int data = ms->head->data;
        ms->head->next->prev = NULL;
        // head->prev->next = head->next;
        ms->head = ms->head->next;

        delete temp;
        if (ms->num & 1)
        {
            ms->mid = ms->mid->prev;
        }
        return data;
    }

}
// void print(node *&head)
// {
//     node *temp = head;

//     while (!(temp->next == NULL))
//     {
//         cout << temp->next->data << endl;
//         temp = temp->next;
//     }
//     while (!temp == NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->prev;
//     }
// }

main()
{
    myStack *ms = new myStack;
    push(ms, 5);
    cout << (ms->mid->data) << endl;

    push(ms, 46);
    cout << (ms->mid->data) << endl;

    // cout << pop(ms) << endl;
    // cout << "num : " << ms->num << endl;
    // cout << (ms->mid->data) << endl;

    push(ms, 23);
    cout << (ms->mid->data) << endl;

    push(ms, 12);
    cout << (ms->mid->data) << endl;

    cout << "num : " << ms->num << endl;

    cout << pop(ms) << endl;
    cout << (ms->mid->data) << endl;

    push(ms, 7);
    cout << (ms->mid->data) << endl;

    push(ms, 9);
    // cout << pop(head) << endl;
    cout << (ms->mid->data) << endl;

    // findMiddle();
    // deleteMiddle();
}