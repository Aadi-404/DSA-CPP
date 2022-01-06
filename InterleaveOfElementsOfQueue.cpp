#include <bits/stdc++.h>
using namespace std;

queue<int> interleave(queue<int> q)
{
    int count = 0 ;
    int k = q.size();
    stack<int> s;
    while (q.size() > k / 2)
    {
        int data = q.front();
        q.pop();
        s.push(data);
    }
    // while (!s.empty())
    // {
    //     cout << s.top() << " , ";
    //     s.pop();
    // }

    while (!s.empty())
    {
        int data = s.top();
        q.push(data);
        s.pop();
    }
    while (count < k / 2)
    {
        int data = q.front();
        q.pop();
        q.push(data);
        count ++;
    }
    while (q.size() > k / 2)
    {
        int data = q.front();
        q.pop();
        s.push(data);
    }
    // while (!q.empty())
    // {
    //     cout << q.front() << " , ";
    //     q.pop();
    // }
    while (!s.empty())
    {
        int data = s.top();
        q.push(data);
        s.pop();
        data = q.front();
        q.pop();
        q.push(data);
    }
    return q;
}
main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);



    q = interleave(q);
    while (!q.empty())
    {
        cout << q.front() << "  ";
        q.pop();
    }
}