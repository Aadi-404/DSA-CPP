#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queu
{
public:
    node *front;
    node *back;
    queu()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int data)
    {
        node *n = new node(data);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void deque()
    {
        if (front == NULL)
        {
            cout << "queue is underflow" << endl;
            return;
        }
        node *del = front;
        front = front->next;
        delete del;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "queue is underflow" << endl;
            return -1;
        }
        return back->data;
    }
    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return 0;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return 0;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

int print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}

main()
{
    // node *head = NULL;
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtHead(head, 0);
    // print(head);

    queu q;
    q.enqueue(5);
    q.enqueue(8);
    cout<<q.peek()<<endl;
}